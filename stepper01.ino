/*seconda prova uso Stepper Motor EasyDriver*/

void setup() {
  // put your setup code here, to run once:
  pinMode(12,OUTPUT); //direzione
  pinMode(11,OUTPUT); //passo

  pinMode(13,OUTPUT); //passo
  Serial.begin(9600);
}

int i = 0;

void loop() {
  //delayMicroseconds(800);
  //if( i%5 )
  //  delay(20+i);
  //else
  delay(10);
  if(i%10==0){
    Serial.println(i);
    delay(1000);
  }
  i++;
  digitalWrite(11,i%2);
  if( i%800==0 ) {
    delay(250);
  }
  
  if( i%3200==0 ) {
    digitalWrite(12,(i/3200)%2);
    delay(500);
  }
  if( i%32000==0)i=0;
  digitalWrite(13,i%2);
  
}
