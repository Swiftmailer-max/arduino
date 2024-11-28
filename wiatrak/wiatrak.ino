const int Wiatrak = 13;

void setup() {
  pinMode(Wiatrak, OUTPUT);
}
void loop(){
  digitalWrite(Wiatrak,LOW);
  delay(5000);
  digitalWrite(Wiatrak,HIGH);
  delay(10000);
}
