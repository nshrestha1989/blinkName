

int led1 = D7;

int threeSecond=3000;
int oneSecond=1000;
int interval=4000;

void setup() {



  pinMode(led1, OUTPUT);
  

}


void loop() {
  
  //morse code 
  
  //N
  digitalWrite(led1, HIGH);
  delay(threeSecond);
  digitalWrite(led1, LOW);
  delay(oneSecond);
  digitalWrite(led1, HIGH);
   delay(oneSecond);
  digitalWrite(led1, LOW);
  delay(interval);
  
  //I
  
   digitalWrite(led1, HIGH);
  delay(oneSecond);
  digitalWrite(led1, LOW);
  delay(oneSecond);
  digitalWrite(led1, HIGH);
   delay(oneSecond);
  digitalWrite(led1, LOW);
  delay(interval);
  
  //R
  
     digitalWrite(led1, HIGH);
  delay(oneSecond);
  digitalWrite(led1, LOW);
  delay(oneSecond);
  digitalWrite(led1, HIGH);
   delay(threeSecond);
  digitalWrite(led1, LOW);
  delay(oneSecond);
    digitalWrite(led1, HIGH);
  delay(oneSecond);
  digitalWrite(led1, LOW);
  delay(interval);

//A
  
  digitalWrite(led1, HIGH);
  delay(oneSecond);
  digitalWrite(led1, LOW);
  delay(oneSecond);
  digitalWrite(led1, HIGH);
   delay(threeSecond);
   digitalWrite(led1, LOW);
    delay(interval);
    
  //N
  digitalWrite(led1, HIGH);
  delay(threeSecond);
  digitalWrite(led1, LOW);
  delay(oneSecond);
  digitalWrite(led1, HIGH);
   delay(oneSecond);
  digitalWrite(led1, LOW);
  delay(interval);
  
  //J
    digitalWrite(led1, HIGH);
  delay(oneSecond);
  digitalWrite(led1, LOW);
  delay(oneSecond);
  digitalWrite(led1, HIGH);
   delay(threeSecond);
  digitalWrite(led1, LOW);
  delay(oneSecond);
  digitalWrite(led1, HIGH);
   delay(threeSecond);
  digitalWrite(led1, LOW);
  delay(oneSecond);
  digitalWrite(led1, HIGH);
   delay(threeSecond);
  digitalWrite(led1, LOW);
    delay(interval);
  
  //A
  
  digitalWrite(led1, HIGH);
  delay(oneSecond);
  digitalWrite(led1, LOW);
  delay(oneSecond);
  digitalWrite(led1, HIGH);
   delay(threeSecond);
   digitalWrite(led1, LOW);
    delay(interval);
  
    //N
  digitalWrite(led1, HIGH);
  delay(threeSecond);
  digitalWrite(led1, LOW);
  delay(oneSecond);
  digitalWrite(led1, HIGH);
   delay(oneSecond);
  digitalWrite(led1, LOW);
  delay(interval);
  

}

