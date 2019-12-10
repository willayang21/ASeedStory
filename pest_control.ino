
#include <CapacitiveSensor.h>

CapacitiveSensor   capSensor = CapacitiveSensor(11,16);       

const int hit = 11;
const int heat_pest = 9;
int hit_state = 0;
int last_hit_state = 0;

const int debounce_duration = 40;
long last_hit_time = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(heat_pest, OUTPUT);
  pinMode(hit, INPUT);
  Serial.begin(9600);
//  capSensor.set_CS_AutocaL_Millis(0xFFFFFFFF);     // turn off autocalibrate on channel 1 - just as an example
  
}

void loop() {
  long total =  capSensor.capacitiveSensor(30);
  Serial.println(total);

  if (total > 10000) {
    Serial.println("on");    
//    Serial.println("on");
    digitalWrite(heat_pest, HIGH);
    delay(40000);
    digitalWrite(heat_pest, LOW);
    delay(4000);
  }
//  if (total > 100 && on == true) {
//    Serial.println(on);
//    Serial.print("    ");
//    Serial.println(total);
//    delay(100);  
//    hit_state = digitalRead(hit);
//
//  long current_time = millis();

//  if (hit_state == HIGH && current_time - last_hit_time > debounce_duration) {
//    Serial.println("on");
//    digitalWrite(heat_pest, HIGH);
//    delay(5000);
//    digitalWrite(heat_pest, LOW);
    delay(100);
}
  
//  Serial.println(hit_state);
//  if (hit_state != last_hit_state) {
//    if (hit_state == HIGH) {
//      delay(100); 
//      Serial.println("on"); 
      
     

//    } else { 
//      Serial.println("off");  
//      digitalWrite(heat_pest, LOW);    
//    } 
//    delay(50); 
//  }
//  last_hit_state = hit_state;
  
//}
