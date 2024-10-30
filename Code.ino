#include "DHT.h"
#define DHTTYPE DHT11 // DHT 11

const int trigger = 6;  // Digital pin 2 for the Trigger of the sensor
const int echo = 5;     // Digital pin 3 for the Echo of the sensor
const int led1 = 11;
const int led = 12;
const int led2 = 13;
const int led3 = 9;
const int DHTPin = 8;

DHT dht(DHTPin, DHTTYPE);
float dist;

void setup() {
  Serial.begin(9600);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(led, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  dht.begin();
}

void loop() {
  // Measure distance
  digitalWrite(trigger, HIGH);
  delayMicroseconds(5);
  digitalWrite(trigger, LOW);
  delayMicroseconds(10);
  
  dist = pulseIn(echo, HIGH);
  dist = dist / 58;

  Serial.print("Distance = ");
  Serial.print(dist);
  Serial.print(" cm");
  Serial.write(10);
  delay(200);

  // Measure temperature
  float t = dht.readTemperature();
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print(" *C ");

  // Temperature LED logic
  if(t > 27) {
    digitalWrite(led3, HIGH);
    delay(100);
    digitalWrite(led3, LOW);
    delay(100);
  } else {
    digitalWrite(led3, LOW);
  }

  // Distance LED logic
  if(dist <= 4) {
    digitalWrite(led1, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led2, LOW);
  } else if(dist > 4 && dist <= 10) {
    digitalWrite(led, HIGH);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  } else {
    digitalWrite(led2, HIGH);
    digitalWrite(led1, LOW);
    digitalWrite(led, LOW);
  }
}
