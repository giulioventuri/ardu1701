void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Buonasera a tutti, sono Arduino UNO");
  delay(2000);
  if( Serial.available() ) {
    int b = Serial.read();
    if( b > 20 ) {
      Serial.print(" ricevuto: ");
      Serial.println(b);
    }
  }
}
