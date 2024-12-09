#include <SoftwareSerial.h>

SoftwareSerial bleSerial(0, 1);  // RX, TX

const int fsrPin = A0;
int fsrValue = 0;

// Number of samples for averaging
const int numSamples = 10;

void setup() {
  Serial.begin(9600);
  bleSerial.begin(9600);

  // Initialize BLE module
  bleSerial.println("AT+BLEINIT=1");
  delay(1000);
}

void loop() {
  int totalValue = 0;

  // Take multiple samples and calculate the average
  for (int i = 0; i < numSamples; i++) {
    fsrValue = analogRead(fsrPin);
    totalValue += fsrValue;
    delay(50);  // Add a small delay between samples
  }

  // Calculate the average FSR value
  int avgFsrValue = totalValue / numSamples;

  // Calculate the voltage
  float voltage = ((float)avgFsrValue / 1023.0) * 4.9;
  
  // Print average FSR value to serial monitor
  //Serial.print("Average FSR Value: ");
  //Serial.println(avgFsrValue);

  Serial.print("Force: ");
  Serial.print(voltage);
  Serial.println("N");

  // Send average FSR value over BLE
  bleSerial.print("AT+BLEUARTTX=");
  //bleSerial.println(avgFsrValue);
  bleSerial.print("Force: ");
  bleSerial.print(voltage);
  bleSerial.println("N");
  delay(1000);  // Add a delay to avoid overwhelming the BLE module

  // Add any additional logic or delay as needed
}
