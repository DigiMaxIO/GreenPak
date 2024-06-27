#include "Greenpak.h"             // Include Greenpak header file
#include "macros/SLG46531.h"    // Include macros for SLG46531

// Create an instance of Greenpak class called
// "greenpak" with device address 0x00
Greenpak greenpak(0x00);          

uint32_t a = 0x01;
byte myData;

void setup() 
{
	Serial.begin(115200);
	Serial.print("GreenPAK: ");
	Serial.println(GreenPAK);
	greenpak.writeI2C(RAM_BYTE_0,0x00);
}

void loop() 
{
	while(a <= 0xFF) 
	{
		greenpak.writeI2C(RAM_BYTE_0, 1, a);    // write "1" to bit_location "a" in RAM_BYTE_0
		myData = greenpak.readI2C(RAM_BYTE_0);  // read data in RAM_BYTE_0 and store it in "myData"

		Serial.print("myData (BIN): ");       // print the value of "myData" to
		Serial.print(myData, BIN);            // the Arduino Serial Monitor
		Serial.println();
		a = a<<1;                             // Shift "a" to the left by 1 bit
		delay(100);
	}
}
