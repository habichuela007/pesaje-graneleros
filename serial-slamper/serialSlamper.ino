void setup() {
  Serial.begin(2400);
  randomSeed(analogRead(0)); // Inicializar la semilla aleatoria con un valor analógico
}

void loop() {
  // Generar un peso aleatorio entre 0 y 2000
  int weight = random(0, 2001);

  // Calcular el valor XOR
  byte xorValue = calculateXOR(weight);

  // Enviar el byte de inicio (STX)
  Serial.write(0x02);

  // Enviar el signo (+/-) como un byte ASCII
  if (weight >= 0) {
    Serial.write('+');
  } else {
    Serial.write('-');
    weight = -weight;
  }

  // Enviar los dígitos del peso como bytes ASCII
  for (int i = 1000; i >= 1; i /= 10) {
    byte digit = weight / i % 10;
    Serial.write(digit + '0');
  }

  // Enviar el dígito decimal (asumiendo 2 decimales siempre) como un byte ASCII
  Serial.write('0' + 2);

  // Enviar los bits superiores del resultado XOR como un byte ASCII
  Serial.write('0' + (xorValue >> 4));

  // Enviar los bits inferiores del resultado XOR como un byte ASCII
  Serial.write('0' + (xorValue & 0x0F));

  // Enviar el byte de fin (ETX)
  Serial.write(0x03);

  delay(1000); // Esperar 1 segundo antes de enviar el siguiente dato
}

byte calculateXOR(int weight) {
  byte xorValue = 0;

  byte* weightBytes = (byte*)&weight;
  for (int i = 1; i <= 8; i++) {
    xorValue ^= weightBytes[i];
  }

  return xorValue;
}
