#include <Servo.h>
Servo myServo;
int servoPin=9;
int rainSensorPin=A0;
int rainThreshold = 500; // this a threshold value for rain detection

void setup() {
//  initialize The serial communication 
Serial.begin(9600);
// attach the servo to the specified Pin
myServo.attach(servoPin);

//set the initial position of the servo

myServo.write(180); // set the servo Position 

}

void loop() {
int sensorValue=analogRead(rainSensorPin); // read the value from the rainSensor

//print the sensorValue to the serial monitor just for debugging
Serial.print("rain Sensor value: ");
Serial.println(sensorValue);

//cheak if the sensorValue is above the threshold
if(sensorValue < rainThreshold){

  //Rain detected, move the servo to 120 degrees
  myServo.write(120);
  Serial.println("Rain detected, move the servo to 120 degrees");
} 
else {
  //no Rain detected, move the servo to 180 degrees
  myServo.write(180);
    Serial.println("No Rain detected, move the servo to 180 degrees");


}
delay(500); //short delay to avoid rapid movements

}
