/*
 * code to play sound when detecting an object
 */

 
#define Trig 6 // Lets define Trig
#define Echo 7 // Lets define Echo

int distance;
long duration;


void setup() {
  // OwO Lets regester some pins:
  
  pinMode(Trig, OUTPUT); // Pin-6 (Trig)
  pinMode(Echo, INPUT); // pin-7 (Echo)
  pinMode(9, OUTPUT); // Speaker
  Serial.begin(9600); // Setup serial value
}

void loop() {
 
  // Some working stuffs goes here:

  digitalWrite(Trig, LOW); // Turning off if the thing is working
  delayMicroseconds(2); // Lets delay
  digitalWrite(Trig, HIGH); 
  delayMicroseconds(10);
  digitalWrite(Trig, LOW);
  duration = pulseIn(Echo, HIGH);
  distance = ( 0.034*duration / 2); // Distance caculation
  Serial.println(distance); // Lets print the distance
  if(distance<30)
  {
    tone(9,150,600); // Define the tune
    tone(9,200,600); // ""
  }
}
