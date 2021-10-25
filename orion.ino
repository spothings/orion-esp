#include "BluetoothSerial.h" 
BluetoothSerial ORION;
char recive;

void setup() {
  Serial.begin(115200);
  ORION.begin("ORION");
}
void loop() {
  if (ORION.available()){
    recive = ORION.read();
    Serial.print("Received:");
    Serial.println(recive);
  }
}
