const int ledPin14 = 14;
const int ledPin13 = 13;
const int ledPin12 = 12;
const int ledPin11 = 11;
const int ledPin10 = 10;
const int ledPin9 = 9;
const int ledPin8 = 8;
const int ledPin7 = 7;
const int ledPin6 = 6;
const int ledPin5 = 5;
const int ledPin4 = 4;
const int ledPin3 = 3;
const int ledPin2 = 2;
const int ledPin1 = 1;
const int ledPin0 = 0;

void setup() {
  pinMode(ledPin14, OUTPUT);
  pinMode(ledPin13, OUTPUT);
  pinMode(ledPin12, OUTPUT);
  pinMode(ledPin11, OUTPUT);
  pinMode(ledPin10, OUTPUT);
  pinMode(ledPin9, OUTPUT);
  pinMode(ledPin8, OUTPUT);
  pinMode(ledPin7, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin0, OUTPUT);
}

void loop() {
  int czy_przerwa = 0;

  digitalWrite(ledPin14, HIGH);
  delay(250);
  digitalWrite(ledPin14, LOW);
  if (czy_przerwa) delay(100); 
  digitalWrite(ledPin13, HIGH);
  delay(250);
  digitalWrite(ledPin13, LOW);
  if (czy_przerwa) delay(100);
  digitalWrite(ledPin1, HIGH);
  delay(250);
  digitalWrite(ledPin1, LOW);
  if (czy_przerwa) delay(100);
  digitalWrite(ledPin2, HIGH); 
  delay(250); 
  digitalWrite(ledPin2, LOW); 
  if (czy_przerwa) delay(100); 
  digitalWrite(ledPin12, HIGH);
  delay(250); 
  digitalWrite(ledPin12, LOW);
  if (czy_przerwa) delay(100); 
  digitalWrite(ledPin3, HIGH);
  delay(250);
  digitalWrite(ledPin3, LOW);
  if (czy_przerwa) delay(100); 
  digitalWrite(ledPin11, HIGH);
  delay(250);
  digitalWrite(ledPin11, LOW);
 if (czy_przerwa)  delay(100); 
  digitalWrite(ledPin4, HIGH);
  delay(250);
  digitalWrite(ledPin4, LOW);
 if (czy_przerwa)  delay(100); 
  digitalWrite(ledPin10, HIGH);
  delay(250);
  digitalWrite(ledPin10, LOW);
 if (czy_przerwa) delay(100); 
  digitalWrite(ledPin5, HIGH);
  delay(250);
  digitalWrite(ledPin5, LOW);
 if (czy_przerwa) delay(100); 
  digitalWrite(ledPin9, HIGH);
  delay(250);
  digitalWrite(ledPin9, LOW);
 if (czy_przerwa) delay(100); 
  digitalWrite(ledPin6, HIGH);
  delay(250);
  digitalWrite(ledPin6, LOW);
 if (czy_przerwa) delay(100); 
  digitalWrite(ledPin8, HIGH);
  delay(250);
  digitalWrite(ledPin8, LOW);
 if (czy_przerwa) delay(100); 
  digitalWrite(ledPin7, HIGH);
  delay(250);
  digitalWrite(ledPin7, LOW);
  if (czy_przerwa) delay(100); 
  digitalWrite(ledPin0, HIGH);
  delay(250);
  digitalWrite(ledPin0, LOW);
 if (czy_przerwa) delay(100); 

  /*
  digitalWrite(ledPin14, HIGH);
  delay(250);
  digitalWrite(ledPin14, LOW);
  if (czy_przerwa) delay(100); 
  digitalWrite(ledPin13, HIGH);
  delay(250);
  digitalWrite(ledPin13, LOW);
  if (czy_przerwa) delay(100);
  digitalWrite(ledPin12, HIGH);
  delay(250);
  digitalWrite(ledPin12, LOW);
  if (czy_przerwa) delay(100);
  digitalWrite(ledPin11, HIGH); 
  delay(250); 
  digitalWrite(ledPin11, LOW); 
  if (czy_przerwa) delay(100); 
  digitalWrite(ledPin10, HIGH);
  delay(250); 
  digitalWrite(ledPin10, LOW);
  if (czy_przerwa) delay(100); 
  digitalWrite(ledPin9, HIGH);
  delay(250);
  digitalWrite(ledPin9, LOW);
  if (czy_przerwa) delay(100); 
  digitalWrite(ledPin8, HIGH);
  delay(250);
  digitalWrite(ledPin8, LOW);
 if (czy_przerwa)  delay(100); 
  digitalWrite(ledPin7, HIGH);
  delay(250);
  digitalWrite(ledPin7, LOW);
 if (czy_przerwa)  delay(100); 
  digitalWrite(ledPin6, HIGH);
  delay(250);
  digitalWrite(ledPin6, LOW);
 if (czy_przerwa) delay(100); 
  digitalWrite(ledPin5, HIGH);
  delay(250);
  digitalWrite(ledPin5, LOW);
 if (czy_przerwa) delay(100); 
  digitalWrite(ledPin4, HIGH);
  delay(250);
  digitalWrite(ledPin4, LOW);
 if (czy_przerwa) delay(100); 
  digitalWrite(ledPin3, HIGH);
  delay(250);
  digitalWrite(ledPin3, LOW);
 if (czy_przerwa) delay(100); 
  digitalWrite(ledPin2, HIGH);
  delay(250);
  digitalWrite(ledPin2, LOW);
 if (czy_przerwa) delay(100); 
  digitalWrite(ledPin1, HIGH);
  delay(250);
  digitalWrite(ledPin1, LOW);
  if (czy_przerwa) delay(100); 
  digitalWrite(ledPin0, HIGH);
  delay(250);
  digitalWrite(ledPin0, LOW);
 if (czy_przerwa) delay(100); 

 */
}
