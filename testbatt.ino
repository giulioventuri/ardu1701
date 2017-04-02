/* Urbania, 2 marzo 2017
   corso base Arduino
   esempio tester batteria
   
   Arduino legge il pin A1.
   La lettura e' un numero da 0 a 1023 ( campionamento a 10 bit )
   Il calcolo 5.0*a/1023 risolve la proporzione e restituisce i volt
   (funziona solo con differenze di potenziale positive e minori di 5 volt!!)
*/
void setup() {
  pinMode(A1,INPUT);
  Serial.begin(115200);
}

int a = 0;
void loop() {
  // put your main code here, to run repeatedly:
  a=analogRead(A1);
  Serial.println(5.0*a/1023,3);
}
