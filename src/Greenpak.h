/*
	Greenpak.h - Greenpak library for Wiring - description
	Copyright (c) 2016 David Riedell.  All right reserved.
*/

// ensure this library description is only included once
#ifndef Greenpak_h
#define Greenpak_h

#include "Arduino.h"
#include "Wire.h"

class Greenpak {
	public:
		// Greenpak - Creates a Greenpak class
		Greenpak(int device_address);
		
		// writeI2C - Writes data to GreenPAK register byte_address
		void writeI2C(byte byte_address, byte data);
		void writeI2C(byte byte_address, bool data, byte bit_location);
		void writeI2C(byte byte_address, byte data, byte bit_location, byte length);

		// readI2C - Reads data from GreenPAK register byte_address
		uint8_t readI2C(byte byte_address);
		bool readI2C(byte byte_address, byte bit_location);
	
	private:
		int _device_address;
};


#endif

