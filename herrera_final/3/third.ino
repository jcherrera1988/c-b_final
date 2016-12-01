void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(12, OUTPUT);

//12 IS THE BRIGHT FLASHY LIGHT!
//2:06 Montauk – Bayside
}

// the loop function runs over and over again forever
void loop() {
    digitalWrite(13, HIGH);
    delay(50);
    digitalWrite(13,LOW);
    
    digitalWrite(11, HIGH);
    delay(50);
    digitalWrite(11, LOW);
    
    digitalWrite(10, HIGH);
    delay(50);
    digitalWrite(10, LOW);    

    digitalWrite(12, HIGH);
    delay(1500);
    digitalWrite(12, LOW);    
    
    digitalWrite(11, HIGH);
    delay(500);
    digitalWrite(11, LOW);
    
    digitalWrite(10, HIGH);
    delay(250);
    digitalWrite(10, LOW);
    
    digitalWrite(8, HIGH);
    delay(400);
    digitalWrite(8, LOW);
    
    digitalWrite(13, HIGH);
    delay(100);
    digitalWrite(13, LOW);
    
    
    digitalWrite(12, HIGH);
    delay(1500);
    digitalWrite(12, LOW);
}
