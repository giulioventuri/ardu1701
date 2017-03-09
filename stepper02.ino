

int ppasso=9;
int pdirezione=8;

void setup() {
  // put your setup code here, to run once:
  pinMode(ppasso,OUTPUT);
  pinMode(pdirezione,OUTPUT);

  Serial.begin(9600);
}

int npassi=0;
int dir=LOW;

void loop() {
  // put your main code here, to run repeatedly:

  delay(100);
  digitalWrite(pdirezione,dir);
  digitalWrite(ppasso,npassi%2);
  
  Serial.print("passo= ");
  Serial.print(npassi);
  
 //
  if( dir == LOW )
    { 
    npassi=npassi+1;
    if( npassi>1000 ) {
        npassi=1000;
        dir = HIGH;
    }
    }
  else
    {
    npassi=npassi-1;
    if( npassi<0 ) {
        npassi=0;
        dir = LOW;
    }
  }
  byte a=analogRead(A1);
  Serial.print(" lettura= ");
  Serial.println(a);
   
}
