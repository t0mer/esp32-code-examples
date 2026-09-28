# esp32-code-examples

A collection of small Arduino sketches for the ESP32. Each example lives in its own folder and can be opened directly in the Arduino IDE.

## Examples

| Example | What it does |
|---------|--------------|
| [`BMP180Sensor`](BMP180Sensor/BMP180Sensor.ino) | Reads temperature, pressure and altitude from a BMP180 (or BMP085) barometric sensor and prints them to the serial monitor. |

## BMP180Sensor

Reads a BMP180/BMP085 sensor over I²C and prints the following, pausing 500 ms between readings:

* Temperature (°C)
* Pressure (Pa)
* Altitude (m), based on the standard sea-level pressure of 101325 Pa
* Sea-level pressure (Pa), calculated for an altitude of 0 m
* Adjusted altitude (m), based on a sea-level pressure of 102000 Pa (change this value to your local sea-level pressure for a better reading)

If the sensor is not found at startup, the sketch prints `Sensor not detected, verify connections.` and stops.

### Wiring

Connect the sensor's SDA and SCL to the ESP32's default I²C pins (GPIO 21 = SDA and GPIO 22 = SCL on classic ESP32 boards such as the DevKitC / WROOM-32), plus power and ground.

### Requirements

* [Arduino IDE](https://www.arduino.cc/en/software) with ESP32 board support.
* The [Adafruit BMP085 Library](https://github.com/adafruit/Adafruit-BMP085-Library), available in the Arduino Library Manager. It also supports the BMP180.

### Usage

1. Open `BMP180Sensor/BMP180Sensor.ino`.
2. Select your ESP32 board and port, then upload.
3. Open the serial monitor at **9600** baud.

## License

[Apache License 2.0](LICENSE)
