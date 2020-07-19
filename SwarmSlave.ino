#define B1 0
#define B2 1
#define B3 2
#define B4 3
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(B1,INPUT);
  pinMode(13,OUTPUT);
  pinMode(B2,INPUT);
  pinMode(B3,INPUT);
  pinMode(B4,INPUT);
 // pinMode(A0,INPUT);
 // pinMode(A1,INPUT);

}
/*void moveRobot(String motion){
  if(motion =="Forward")
  {
    digitalWrite(10,HIGH);   
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
Serial.println("Forward");

  }
  if(motion =="Backward")
  {
    digitalWrite(10,LOW);   
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
Serial.println("Backward");


  }
  if(motion =="Right")
  {
    digitalWrite(10,LOW);   
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
Serial.println("Right");


  }
  if(motion =="Left")
  {
    digitalWrite(10,HIGH);   
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
Serial.println("Left");


  }
  if(motion =="Stop")
  {
    digitalWrite(10,LOW);   
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
Serial.println("Stop");


  }
  }
void sendData(String motion){
  if(motion =="Forward")
  {
    digitalWrite(B1,HIGH);   
    digitalWrite(B2,LOW);
    digitalWrite(B3,HIGH);
    digitalWrite(B4,LOW);
Serial.println("SENT Forward");

  }
  if(motion =="Backward")
  {
    digitalWrite(B1,LOW);   
    digitalWrite(B2,HIGH);
    digitalWrite(B3,LOW);
    digitalWrite(B4,HIGH);
Serial.println("SENT Backward");


  }
  if(motion =="Right")
  {
    digitalWrite(B1,LOW);   
    digitalWrite(B2,HIGH);
    digitalWrite(B3,HIGH);
    digitalWrite(B4,LOW);
Serial.println("SENT Right");


  }
  if(motion =="Left")
  {
    digitalWrite(B1,HIGH);   
    digitalWrite(B2,LOW);
    digitalWrite(B3,LOW);
    digitalWrite(B4,HIGH);
Serial.println("SENT Left");


  }
  if(motion =="Stop")
  {
    digitalWrite(B1,LOW);   
    digitalWrite(B2,LOW);
    digitalWrite(B3,LOW);
    digitalWrite(B4,LOW);
Serial.println("SENT Stop");


  }
  }*/
void loop() {
  // put your main code here, to run repeatedly:
  int d1=digitalRead(B1);
  int d2=digitalRead(B2);
  int d3=digitalRead(B3);
  int d4=digitalRead(B4);
/*Serial.println(String(d1)+String(d2)+String(d3)+String(d4));
 if((d1==1)&&(d2==0)&&(d3==1)&&(d4==0)){
  moveRobot("Forward");
  Serial.println("Forward");
 }
 if((d1==0)&&(d2==0)&&(d3==0)&&(d4==0)){
  moveRobot("Stop");
  Serial.println("Stop");
 }
 if((d1==1)&&(d2==0)&&(d3==0)&&(d4==1)){
  moveRobot("Left");
  Serial.println("Left");
 }
 if((d1==0)&&(d2==1)&&(d3==1)&&(d4==0)){
  moveRobot("Right");
  Serial.println("Right");
 }
*/ Serial.println(String(d1)+String(d2)+String(d3)+String(d4));
 if((d1==1)&&(d2==0)&&(d3==0)&&(d4==1)){
  Serial.println("Data recieved");
  }
  else
  {
    Serial.println("Data not recieved");
  }
  }
