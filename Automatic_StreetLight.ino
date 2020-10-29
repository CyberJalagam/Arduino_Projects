/*
 * Simple AF Code for automatic streetlight with serial monitor output
 */

#define LDR A0                     // Define output pin of LDR


void setup(){
Serial.println("Initializing Automatic Streetlight");
delay(1000);
//  
pinMode(8, OUTPUT);               // 8 = Positive pin of LED
Serial.begin(9600);
//
Serial.println("Automatic Streetlight: System READY!");
Serial.println("Automatic Streetlight: System will be working in 5sec, LDR values will be printed");
delay(5000);
Serial.println("Automatic Streetlight: Powered ON!");
delay(500);

}



void loop(){

int value = analogRead(A0);       // Read value of A0(Output pin of LDR)

Serial.println(value);

if(value<300)
{
  digitalWrite(8, HIGH);          // 8 = Positive pin of LED
}
else
{
  digitalWrite(8, LOW);           // 8 = Positive pin of LED
}

}
