#define trig 6           // 6 = trigger pin
#define echo 7           // 7 = echo pin
const int motorX1 = 2;   // 2 = in1
const int motorX2 = 3;   // 3 = in2
const int motorY1 = 4;   // 4 = in3
const int motorY2 = 5;   // 5 = in4
long duration;
int distance;
void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(motorX1, OUTPUT);
  pinMode(motorX2, OUTPUT);
  pinMode(motorY1, OUTPUT);
  pinMode(motorY2, OUTPUT);
}
void measure() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  distance = (duration * 0.034 / 2);  //80
}
void forward()
{
  digitalWrite(motorX1, LOW);
  digitalWrite(motorX2, HIGH);
  digitalWrite(motorY1, LOW);
  digitalWrite(motorY2, HIGH);
}
void backward()
{
  digitalWrite(motorX1, HIGH);
  digitalWrite(motorX2, LOW);
  digitalWrite(motorY1, HIGH);
  digitalWrite(motorY2, LOW);
}
void rotate()
{
  digitalWrite(motorX1, LOW);
  digitalWrite(motorX2, HIGH);
  digitalWrite(motorY1, LOW);
  digitalWrite(motorY2, HIGH);
}
void Stop()
{
  digitalWrite(motorX1, LOW);
  digitalWrite(motorX2, LOW);
  digitalWrite(motorY1, LOW);
  digitalWrite(motorY2, LOW);
}
void loop()
{
measure(); //200
while(distance>100)
{
  rotate();
  measure();  
}
Stop();
while(distance < 100)
{
  forward();
  measure();
}
Stop();
backward();
delay(1500);
}
