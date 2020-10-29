/*
 * Simple code for Light Following Robot
 */

#define LDR A0                     // Define output pin of LDR


void setup(){
Serial.println("Initializing Automatic Streetlight");
delay(1000);
//  
pinMode(13, OUTPUT);               // 8 = Positive pin of LED
Serial.begin(9600);
pinMode(2, OUTPUT); // MOTOR
pinMode(3, OUTPUT); // MOTOR
pinMode(4, OUTPUT); // MOTOR
pinMode(5, OUTPUT); // MOTOR
//
Serial.println("LightFollowingRobot: System READY!");
Serial.println("LightFollowingRobot: System will be working in 5sec, LDR values will be printed");
delay(5000);
Serial.println("LightFollowingRobot: Powered ON!, Check the "L" LED to verify if the system detects light");
delay(2000);

}

void loop(){

int value = analogRead(A0);       // Read value of A0(Output pin of LDR)

Serial.println(value);

if(value>230)
{
  digitalWrite(13, HIGH);          // 8 = Positive pin of LED
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
}
else
{
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(13, LOW);           // 8 = Positive pin of LED
}

}
