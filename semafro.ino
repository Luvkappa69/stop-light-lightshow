#define on 1
#define off 0
#define ledG 7
#define ledY 5
#define ledR 3

void setup() {
  // put your setup code here, to run once:
  pinMode(ledG, OUTPUT);
  pinMode(ledY, OUTPUT);
  pinMode(ledR, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  int a=3;

  while(a>0){

    digitalWrite(ledG, on);
    delay(2000);
    digitalWrite(ledG, off);

    digitalWrite(ledY, on);
    delay(500);
    digitalWrite(ledY, off);

    digitalWrite(ledR, on);
    delay(1000);
    digitalWrite(ledR, off);
    a--;
  }



  int i=5;
  while(i>1){
    digitalWrite(ledG, on);
    delay(100);
    digitalWrite(ledY, on);
    delay(100);
    digitalWrite(ledR, on);
    delay(100);
    

    digitalWrite(ledR, off);
    delay(100);
    digitalWrite(ledY, off);
    delay(100);
    digitalWrite(ledG, off);
    delay(100);

    digitalWrite(ledR, on);
    delay(100);
    digitalWrite(ledY, on);
    delay(100);
    digitalWrite(ledG, on);
    delay(100);
    

    digitalWrite(ledG, off);
    delay(100);
    digitalWrite(ledY, off);
    delay(100);
    digitalWrite(ledR, off);
    delay(100);

    i--;

    int b=8;
    while(b>1){
      digitalWrite(ledG, on);
      delay(50);
      digitalWrite(ledY, on);
      delay(50);
      digitalWrite(ledR, on);
      delay(50);
      

      digitalWrite(ledG, off);
      delay(50);
      digitalWrite(ledY, off);
      delay(50);
      digitalWrite(ledR, off);
      delay(50);

      b--;
   }
  }


  for(int i=10;i>1;i--){

    digitalWrite(ledY, on);
    delay(500);
    digitalWrite(ledY, off);
    delay(500);
  }


}
