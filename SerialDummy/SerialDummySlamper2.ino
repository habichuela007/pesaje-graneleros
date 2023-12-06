void setup() {
  Serial.begin(9600); // Iniciar el puerto serial a 9600 baudios
}

void loop() {
  // Generar un peso aleatorio entre 10 kg y 1000 kg
  float weight = random(100, 10000) / 10.0;
  
  // Convertir el peso a bytes
  byte data[12];
  data[0] = 0x11; // START
  data[1] = 0x2B; // + SIGN
  int32_t weight_int = weight * 1000;
  for (int i = 2; i <= 7; i++) {
    data[i] = (weight_int >> ((i-2)*8)) & 0xFF;
  }
  data[8] = 0x01; // DECIMAL POINT (1 decimal place)
  byte xor = 0;
  for (int i = 1; i <= 8; i++) {
    xor ^= data[i];
  }
  data[9] = (xor >> 4) & 0x0F; // XOR RESULT HIGH 4 BITS
  data[10] = xor & 0x0F; // XOR RESULT LOW 4 BITS
  data[11] = 0x13; // STOP
  
  // Enviar la trama a través del puerto serial
  Serial.write(data, 12);
  
  // Esperar 1 segundo antes de generar la siguiente trama
  delay(1000);
}