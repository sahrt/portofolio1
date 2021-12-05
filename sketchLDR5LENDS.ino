int W = -6;
int B = -5;
int G = 4;
int Y = -3;
int R = 2;
int LDR = A0;

void setup(){
	Serial.begin(9600);
	pinMode (W,OUTPUT);
	pinMode (B,OUTPUT);
	pinMode (G,OUTPUT);
	pinMode (Y,OUTPUT);
	pinMode (R,OUTPUT);
	pinMode (A0,INPUT);

}
void loop(){
	int LDRStatus = analogRead(LDR);

	if(LDRstatus >= 1000){
	digitalWrite (W,HIGH);
	digitalWrite (B,HIGH);
	digitalWrite (G,HIGH);
	digitalWrite (Y,HIGH);
	digitalWrite (R,HIGH);
	Serial.println ("W ON");
	Serial.println ("B ON");
	Serial.println ("G ON");
	Serial.println ("Y ON");
	Serial.println ("R ON");
	
	}
	else if (LDRStatus >= 900 ) {
	digitalWrite (W,LOW);
	digitalWrite (B,HIGH);
	digitalWrite (G,HIGH);
	digitalWrite (Y,HIGH);
	digitalWrite (R,HIGH);
	Serial.println ("W OFF");
	Serial.println ("B ON");
	Serial.println ("G ON");
	Serial.println ("Y ON");
	Serial.println ("R ON");

	}
	else if (LDRStatus >= 700) {
	digitalWrite (W,LOW);
	digitalWrite (B,LOW);
	digitalWrite (G,HIGH);
	digitalWrite (Y,HIGH);
	digitalWrite (R,HIGH);
	Serial.println ("W OFF");
	Serial.println ("B OFF");
	Serial.println ("G ON");
	Serial.println ("Y ON");
	Serial.println ("R ON");
	}
	else if (LDRStatus >= 600) {
	digitalWrite (W,LOW);
	digitalWrite (B,LOW);
	digitalWrite (G,LOW);
	digitalWrite (Y,HIGH);
	digitalWrite (R,HIGH);
	Serial.println ("W OFF");
	Serial.println ("B OFF");
	Serial.println ("G OFF");
	Serial.println ("Y ON");
	Serial.println ("R ON");
	}
	else if (LDRStatus >= 200) {
	digitalWrite (W,LOW);
	digitalWrite (B,LOW);
	digitalWrite (G,LOW);
	digitalWrite (Y,LOW);
	digitalWrite (R,HIGH);
	Serial.println ("W OFF");
	Serial.println ("B OFF");
	Serial.println ("G OFF");
	Serial.println ("Y OFF");
	Serial.println ("R ON");
	}

	else{
	digitalWrite (W,LOW);
	digitalWrite (B,LOW);
	digitalWrite (G,LOW);
	digitalWrite (Y,LOW);
	digitalWrite (R,LOW);
	Serial.println ("W OFF");
	Serial.println ("B OFF");
	Serial.println ("G OFF");
	Serial.println ("Y OFF");
	Serial.println ("R OFF");
	}
}
