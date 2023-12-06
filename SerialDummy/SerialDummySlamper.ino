/*
  Serial Event example

  When new serial data arrives, this sketch adds it to a String.
  When a newline is received, the loop prints the string and clears it.

  A good test for this is to try it with a GPS receiver that sends out
  NMEA 0183 sentences.

  NOTE: The serialEvent() feature is not available on the Leonardo, Micro, or
  other ATmega32U4 based boards.

  created 9 May 2011
  by Tom Igoe

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/SerialEvent
*/

void setup() {
  // initialize serial:
  Serial.begin(9600);
  // reserve delayW bytes for the inputString:
  int delayW = 150;
  while (1==1) {
  // initial state  
  /*  Serial.println(" 00.17");
    delay(delayW);
    Serial.println(" 00.17");
    delay(delayW);
    Serial.println(" 00.17");
    delay(delayW);
    Serial.println(" 00.17");
    delay(delayW);  
    delay(delayW);
    Serial.println(" 00.17");
    delay(delayW);
    Serial.println(" 00.17");
    delay(delayW);
    Serial.println(" 00.17");
    delay(delayW);      */
 //When weigth variates a "M" apears
    Serial.println("10.10");
    delay(delayW);   
    Serial.println("10.10");
    delay(delayW);
    Serial.println("10.10");
    delay(delayW);
    Serial.println("10.10");
    delay(delayW);   
    Serial.println("10.10");
    delay(delayW);
    Serial.println("10.10");
    delay(delayW);
    Serial.println("10.10");
    delay(delayW);   
    Serial.println("10.10");
    delay(delayW);
    Serial.println("10.10");
    delay(delayW);
    Serial.println("10.10");
    delay(delayW);   
    Serial.println("10.10");
    delay(delayW);
    Serial.println("10.10");
    delay(delayW);
    Serial.println("10.10");
    delay(delayW);   
    Serial.println("10.10");
    delay(delayW);
    Serial.println("10.10");
    delay(delayW);
    Serial.println("10.10");
    delay(delayW);   
    Serial.println("10.10");
    delay(delayW);
    Serial.println("10.10");
    delay(delayW);
    Serial.println("10.10");
    delay(delayW);   
    Serial.println("10.10");
    delay(delayW);
    Serial.println("10.10");
    delay(delayW);
    Serial.println("10.10");
    delay(delayW);   
    Serial.println("10.10");
    delay(delayW);
    Serial.println("10.10");
    delay(delayW);
    Serial.println("10.10");
    delay(delayW);   
    Serial.println("10.10");
    delay(delayW);
    Serial.println("10.10");
    delay(delayW);
    Serial.println("10.10");
    delay(delayW);   
    Serial.println("10.10");
    delay(delayW);
    Serial.println("5.10");
    delay(delayW);
    Serial.println("5.10");
    delay(delayW);
    Serial.println("5.10");
    delay(delayW);
    Serial.println("5.10");
    delay(delayW);
    Serial.println("5.10");
    delay(delayW);
    Serial.println("5.10");
    delay(delayW);
    Serial.println("5.10");
    delay(delayW);
    Serial.println("5.10");
    delay(delayW);
    Serial.println("5.10");
    delay(delayW);
    Serial.println("5.10");
    delay(delayW);
    Serial.println("5.10");
    delay(delayW);
    Serial.println("5.10");
    delay(delayW);
    Serial.println("5.10");
    delay(delayW);
    Serial.println("5.10");
    delay(delayW);
    Serial.println("5.10");
    delay(delayW);
    Serial.println("5.10");
    delay(delayW);

            }
}
