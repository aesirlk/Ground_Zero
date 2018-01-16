//Aesirlk
//A simple setup on arduino to make 3 RGB led to fade in and out simultaneously


const int blu = 11;
const int red = 10;
const int gre = 9;
int i;

void setup() {
 //pinMode(red, OUTPUT);
 //pinMode(gre, OUTPUT);
 //pinMode(blu, OUTPUT);
}

void loop() {
     
  for (int i = 0; i<= 255; i+= 5){
    analogWrite(red, 255 - i);
    analogWrite (gre, i);
    delay(50);
  }
  
  for (int i = 0; i<= 255; i+= 5){
    analogWrite(gre, 255 - i);
    analogWrite (blu, i);
    delay(50);
  }

  for (int i = 0; i<= 255; i+= 5){
    analogWrite(blu, 255 - i);
    analogWrite(red,i);
    delay(50);
  }


 
}
 
