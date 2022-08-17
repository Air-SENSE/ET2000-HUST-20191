#define IN1 7
#define IN2 6
#define IN3 5
#define IN4 4

int i;
int a,b;
void setup()
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(13,INPUT);
  pinMode(12,INPUT);
  Serial.begin(9600);
}
 
void loop()
{
    if(digitalRead(11)==0) {
    a=1;
    Serial.println("muc 2");
    delay(200);
  }
    if(digitalRead(12)==0) {
    a=0;
    Serial.println("muc 1");
    delay(200);
  }

  if(a==0){
    muc1();
  }
  if(a==1){
    muc2();
  }
}
void muc1(){
  digitalWrite(IN1,1);
  analogWrite(IN2,80);
  digitalWrite(IN4,1);
  analogWrite(IN3,80);
}
void muc2(){
  digitalWrite(IN1,1);
  analogWrite(IN2,0);
  digitalWrite(IN4,1);
  analogWrite(IN3,0);
}
