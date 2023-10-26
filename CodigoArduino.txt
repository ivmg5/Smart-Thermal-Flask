#include "DHT.h"
#define DHTTYPE DHT11 // DHT 11
const int trigger = 6;
const int echo = 5;
const int led1 = 11;
const int led =12;
const int led2 = 13;
const int led3 = 9;
const int DHTPin = 8;
DHT dht(DHTPin, DHTTYPE); float dist;
void setup(){ Serial.begin(9600); pinMode(trigger,OUTPUT); pinMode(echo,INPUT); pinMode(led, OUTPUT); pinMode(led1, OUTPUT); pinMode(led2, OUTPUT); pinMode(led3, OUTPUT); dht.begin();
}
void loop(){
digitalWrite(trigger,HIGH); delayMicroseconds(5); digitalWrite(trigger,LOW); delayMicroseconds(10); digitalWrite(trigger,LOW); dist=pulseIn(echo,HIGH); dist = dist/58;
//Pin digital 2 para el Trigger del sensor //Pin digital 3 para el Echo del sensor
Serial.print ("Distancia = "); Serial.print (dist); Serial.print (" cm"); Serial.write (10);
delay (200);
float t = dht.readTemperature();//temp Serial.print("Temperature: ");//temp Serial.print(t);//temp
Serial.print(" *C ");//temp digitalWrite(led3, HIGH);
if(t > 0){
if(t > 27){ Serial.print("funcionando "); digitalWrite(led3, HIGH); delay(100); digitalWrite(led3, LOW); delay(100);
} else{
digitalWrite(led3,LOW); }
} if(dist<=4){
digitalWrite(led1, HIGH); digitalWrite(led, LOW); digitalWrite(led2, LOW);
}
if (dist<=10){
if (dist >4){
digitalWrite(led, HIGH); digitalWrite(led1, LOW); digitalWrite(led2, LOW);
} }
else{
digitalWrite(led2, HIGH); digitalWrite(led1, LOW); digitalWrite(led, LOW);
//digitalWrite(led3, LOW); }
}
