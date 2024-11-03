#include <Wire.h>
#include <Adafruit_BMP085.h>

// Initialize BMP085 sensor object
Adafruit_BMP085 bmp;

void setup() {
  Serial.begin(9600);
  
  // Initialize BMP085 sensor, check for connectivity
  if (!bmp.begin()) {
    Serial.println("Sensor not detected, verify connections.");
    while (1) {}  // Halt if sensor is not found
  }
}

void loop() {
  // Read and print temperature in Celsius
  Serial.print("Temperature = ");
  Serial.print(bmp.readTemperature());
  Serial.println(" *C");
    
  // Read and print pressure in Pascals
  Serial.print("Pressure = ");
  Serial.print(bmp.readPressure());
  Serial.println(" Pa");

  // Calculate and print altitude based on standard sea-level pressure
  Serial.print("Altitude = ");
  Serial.print(bmp.readAltitude());
  Serial.println(" meters");

  // Calculate and print sea-level pressure based on altitude
  Serial.print("Sea-level Pressure (calculated) = ");
  Serial.print(bmp.readSealevelPressure());
  Serial.println(" Pa");

  // Calculate and print altitude based on an estimated sea-level pressure (e.g., 102000 Pa)
  Serial.print("Adjusted Altitude = ");
  Serial.print(bmp.readAltitude(102000));
  Serial.println(" meters");

  Serial.println();
  delay(500);  // Delay for readability
}
