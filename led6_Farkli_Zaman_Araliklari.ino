#define led1  5
#define led2  6

int sayac =0;

void setup()
{
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);

}

void loop() {

sayac++;

//Birinci led
       digitalWrite(led1,HIGH);
       delay(100);
       digitalWrite(led1,LOW);
       delay(100);

//ikinci led orta hızda yanıp sönsün

    if (sayac>7){ 
       digitalWrite(led1,HIGH);
       digitalWrite(led2,HIGH);
       delay(100);
       digitalWrite(led1,LOW);
       digitalWrite(led2,LOW);
       delay(100);
       sayac=0;
    }   

}
