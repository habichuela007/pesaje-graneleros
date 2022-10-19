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
    Serial.println("      00KG");
    delay(delayW);
    Serial.println("      00KG");
    delay(delayW);
    Serial.println("      00KG");
    delay(delayW);
    Serial.println("      00KG");
    delay(delayW);  
    delay(delayW);
    Serial.println("      00KG");
    delay(delayW);
    Serial.println("      00KG");
    delay(delayW);
    Serial.println("      00KG");
    delay(delayW);      
 //When weigth variates a "M" apears
    Serial.println("      30KGM");
    delay(delayW);
    Serial.println("     130KGM");
    delay(delayW);
    Serial.println("     350KGM");
    delay(delayW);
    Serial.println("     730KGM");
    delay(delayW);
    Serial.println("    1240KGM");
    delay(delayW);
    Serial.println("    1830KGM");
    delay(delayW);
    Serial.println("    2140KGM");
    delay(delayW);
    Serial.println("    2880KGM");
    delay(delayW);
    Serial.println("    3210KGM");
    delay(delayW);
    Serial.println("    3390KGM");
    delay(delayW);
    Serial.println("    3470KGM");
    delay(delayW);
    Serial.println("    3490KGM");
    delay(delayW);
    Serial.println("    3490KGM");
    delay(delayW);
    Serial.println("    3500KGM");
    delay(delayW);
    Serial.println("    3510KGM");
    delay(delayW);
    Serial.println("    3520KGM");
    delay(delayW);
    Serial.println("    3520KGM");
    delay(delayW);
    Serial.println("    3510KGM");
    delay(delayW);
    Serial.println("    3490KGM");
    delay(delayW);
    Serial.println("    3460KGM");
    delay(delayW);
    Serial.println("    3420KGM");
    delay(delayW);
    Serial.println("    3390KGM");
    delay(delayW);
    Serial.println("    3350KGM");
    delay(delayW);
    Serial.println("    3350KGM");
    delay(delayW);
    Serial.println("    3350KGM");
    delay(delayW);
    Serial.println("    3360KGM");
    delay(delayW);
    Serial.println("    3360KGM");
    delay(delayW);
    Serial.println("    3370KGM");
    delay(delayW);
    Serial.println("    3390KGM");
    delay(delayW);
    Serial.println("    3410KGM");
    delay(delayW);
    Serial.println("    3490KGM");
    delay(delayW);
    Serial.println("    3430KGM");
    delay(delayW);
    Serial.println("    3460KGM");
    delay(delayW);
    Serial.println("    3490KGM");
    delay(delayW);
    Serial.println("    3490KGM");
    delay(delayW);
    Serial.println("    3480KGM");
    delay(delayW);
    Serial.println("    3490KGM");
    delay(delayW);
    Serial.println("    3490KGM");
    delay(delayW);
    Serial.println("    3480KGM");
    delay(delayW);
    Serial.println("    3460KGM");
    delay(delayW);    
    Serial.println("    3440KGM");
    delay(delayW);
    Serial.println("    3660KGM");
    delay(delayW);
    Serial.println("    3980KGM");
    delay(delayW);
    Serial.println("    4450KGM");
    delay(delayW);
    Serial.println("    5020KGM");
    delay(delayW);
    Serial.println("    5590KGM");
    delay(delayW);
    Serial.println("    6070KGM");
    delay(delayW);
    Serial.println("    6400KGM");
    delay(delayW);
    Serial.println("    6460KGM");
    delay(delayW);
    Serial.println("    6660KGM");
    delay(delayW);
    Serial.println("    6780KGM");
    delay(delayW);
    Serial.println("    7040KGM");
    delay(delayW);
    Serial.println("    7470KGM");
    delay(delayW);
    Serial.println("    8010KGM");
    delay(delayW);
    Serial.println("    8600KGM");
    delay(delayW);
    Serial.println("    9100KGM");
    delay(delayW);
    Serial.println("    9480KGM");
    delay(delayW);
    Serial.println("    9700KGM");
    delay(delayW);   
    Serial.println("    9810KGM");
    delay(delayW);
    Serial.println("    9840KGM");
    delay(delayW);
    Serial.println("    9830KGM");
    delay(delayW);
    Serial.println("    9840KGM");
    delay(delayW);
    Serial.println("    9840KGM");
    delay(delayW);
    Serial.println("    9850KGM");
    delay(delayW);
    Serial.println("    9840KGM");
    delay(delayW);
    Serial.println("    9850KGM");
    delay(delayW);
    Serial.println("    9850KGM");
    delay(delayW);
    Serial.println("    9850KGM");
    delay(delayW);
    Serial.println("    9850KGM");
    delay(delayW);

    // When stabilices "M" Desapear
    
    Serial.println("    9840KG");
    delay(delayW);
    Serial.println("    9840KG");
    delay(delayW);
    Serial.println("    9840KG");
    delay(delayW);        
    Serial.println("    9840KG");
    delay(delayW);
    Serial.println("    9840KG");
    delay(delayW);
    Serial.println("    9850KG");
    delay(delayW);    
    Serial.println("    9850KG");
    delay(delayW);       
    Serial.println("    9840KG");
    delay(delayW);
    Serial.println("    9850KG");
    delay(delayW);
    Serial.println("    9840KG");
    delay(delayW);
    Serial.println("    9840KG");
    delay(delayW);
    Serial.println("    9850KG");
    delay(delayW);
    Serial.println("    9840KG");
    delay(delayW);    
    Serial.println("    9850KG");
    delay(delayW);
    Serial.println("    9840KG");
    delay(delayW);
    Serial.println("    9850KG");
    delay(delayW);
    Serial.println("    9840KG");
    delay(delayW);
    Serial.println("    9850KG");
    delay(delayW);
    Serial.println("    9850KG");
    delay(delayW);
    Serial.println("    9850KG");
    delay(delayW);
    Serial.println("    9850KG");
    delay(delayW);
    Serial.println("    9850KG");
    delay(delayW);
    Serial.println("    9850KG");
    delay(delayW);
    Serial.println("    9850KG");
    delay(delayW);
    Serial.println("    9850KG");
    delay(delayW);                        
    Serial.println("    9840KG");
    delay(delayW);    
    Serial.println("    9850KG");
    delay(delayW);    
    Serial.println("    9860KG");
    delay(delayW);    
    Serial.println("    9860KG");
    delay(delayW);        
    Serial.println("    9860KG");
    delay(delayW);    
    Serial.println("    9860KG");
    delay(delayW);    
    Serial.println("    9860KG");
    delay(delayW);    
    Serial.println("    9860KG");
    delay(delayW);    
    Serial.println("    9860KG");
    delay(delayW);    
    Serial.println("    9860KG");
    delay(delayW);    
    Serial.println("    9860KG");
    delay(delayW);    
    Serial.println("    9860KG");
    delay(delayW);    
    Serial.println("    9860KG");
    delay(delayW);    
    Serial.println("    9850KG");
    delay(delayW);          
    Serial.println("    9850KG");
    delay(delayW);    
    Serial.println("    9840KG");
    delay(delayW);                      
    Serial.println("    9850KG");
    delay(delayW);      
    Serial.println("    9840KG");
    delay(delayW);      
    Serial.println("    9840KG");
    delay(delayW);      
    Serial.println("    9840KG");
    delay(delayW);      
    Serial.println("    9840KG");
    delay(delayW);      
    Serial.println("    9840KG");
    delay(delayW);      
    Serial.println("    9840KG");
    delay(delayW);      
    Serial.println("    9840KG");
    delay(delayW);      
    Serial.println("    9840KG");
    delay(delayW);      
    Serial.println("    9840KG");
    delay(delayW);      
    Serial.println("    9840KG");
    delay(delayW);                      
    
    
            
    }
}
