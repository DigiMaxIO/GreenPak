#include "Greenpak.h"             // Include Greenpak header file
#include "macros/SLG46531.h"    // Include macros for SLG46531

// Create an instance of Greenpak class called
// "greenpak" with device address 0x00
Greenpak greenpak(0x00);          

byte a = 0;

void setup() 
{
  Serial.begin(115200);
  Serial.print("GreenPAK: ");
  Serial.println(GreenPAK);
}

void loop() 
{
  // write the value of variable "a" to byte_address RAM_BYTE_0
  greenpak.writeI2C(RAM_BYTE_0, a);

  // read the data in RAM_BYTE_0 and store it in variable "myData"
  byte myData = greenpak.readI2C(RAM_BYTE_0);

  Serial.print("myData: ");      // print the value of "myData" to
  Serial.print(myData);          // the Arduino Serial Monitor
  Serial.println();
  a++;
  delay(100);
}
