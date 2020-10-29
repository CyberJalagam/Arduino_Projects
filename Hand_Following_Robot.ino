/*
 * code for a hand following robot
 */


void setup() {

	pinMode(6, INPUT);  // IR Sensor
	pinMode(2, OUTPUT); // MOTOR
	pinMode(3, OUTPUT); // MOTOR
	pinMode(4, OUTPUT); // MOTOR
	pinMode(5, OUTPUT); // MOTOR
	
	
}

void loop() {
	
	
	if((!(digitalRead(6)))) {
		digitalWrite(2, true);
		digitalWrite(3, false);
		digitalWrite(4, true);
		digitalWrite(5, false);
	}
	else {
		digitalWrite(2, false);
		digitalWrite(3, false);
		digitalWrite(4, false);
		digitalWrite(5, false);
	}
}
