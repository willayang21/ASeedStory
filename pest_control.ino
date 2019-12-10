
#include <CapacitiveSensor.h>

CapacitiveSensor   capSensor = CapacitiveSensor(11,16);       

const int hit = 11;
const int heat_pest = 9;

void setup() {
  pinMode(heat_pest, OUTPUT);
  pinMode(hit, INPUT);
  Serial.begin(9600);
}

void loop() {
  long total =  capSensor.capacitiveSensor(30);
  Serial.println(total);

  if (total > 10000) {
    Serial.println("on");    
    digitalWrite(heat_pest, HIGH);
    delay(40000);
    digitalWrite(heat_pest, LOW);
    delay(4000);
  }
    delay(100);
}
  
