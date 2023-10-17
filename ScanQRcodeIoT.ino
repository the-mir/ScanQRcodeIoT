#include <CameraLibrary.h>

void setup() {
  Camera.begin();
  Camera.setResolution(320, 240);
}

void loop() {

  Camera.readImage();
  Serial.print("QR Code Data: ");
  Serial.println(qrCodeData);

  delay(1000);
}
