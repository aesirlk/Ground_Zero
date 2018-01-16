const int w1 = 11;
const int w2 = 10;
const int w3 = 9;
const int w4 = 6;
int i;


void setup() {
 // put your setup code here, to run once:
 // pinMode(w1, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i<= 255; i+= 5){
    analogWrite(w1, 255 - i);
    analogWrite(w2, i);
  delay(5);
  }

  for (int i = 0; i<= 255; i+= 5){
  analogWrite(w2, 255 - i);
  analogWrite(w3, i);
  delay(5);
 }

  for (int i = 0; i<= 255; i+= 5){
  analogWrite(w3, 255 - i);
  analogWrite(w4, i);
  delay(5);
 }

  for (int i = 0; i<= 255; i+= 25){
  analogWrite(w4, 255 - i);
  delay(5);
 }
 
 for (int i = 0; i<= 255; i+= 5){
  analogWrite(w4, i);
  delay(5);
 }

 for (int i = 0; i<= 255; i+= 5){
  analogWrite(w4, 255 - i);
  analogWrite(w3, i);
  delay(5);
 }

 for (int i = 0; i<= 255; i+= 5){
  analogWrite(w3, 255 - i);
  analogWrite(w2, i);
  delay(5);
 }

 for (int i = 0; i<= 255; i+= 5){
  analogWrite(w2, 255 - i);
  analogWrite(w1, i);
  delay(5);
 }

 for (int i = 0; i<= 255; i+= 25){
  analogWrite(w1, 255 - i);
  delay(5);
 }



 
}
