#define B1 4
#define B2 5
#define B3 6
#define B4 7
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(B1,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(B2,OUTPUT);
  pinMode(B3,OUTPUT);
  pinMode(B4,OUTPUT);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);

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
    digitalWrite(4,HIGH);   
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
Serial.println("SENT Forward");

  }
  if(motion =="Backward")
  {
    digitalWrite(4,LOW);   
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
Serial.println("SENT Backward");


  }
  if(motion =="Right")
  {
    digitalWrite(4,LOW);   
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
Serial.println("SENT Right");


  }
  if(motion =="Left")
  {
    digitalWrite(4,HIGH);   
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
Serial.println("SENT Left");


  }
  if(motion =="Stop")
  {
    digitalWrite(4,LOW);   
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
Serial.println("SENT Stop");


  }
  }*/
void loop() {
// put your main code here, to run repeatedly:
/* int Right=analogRead(A0);
 int Left=analogRead(A1);
// Serial.println("Value of Right Sensor is :"+String(Right));
// Serial.print("\t");
// Serial.println("Value of Left Sensor is :"+String(Left));
 //delay(1000);
 if((Right>600)&&(Left>600)){
  moveRobot("Forward");
  sendData("Forward");
 }
 if((Right<600)&&(Left<600)){
  moveRobot("Stop");
  sendData("Stop");
 }
 if((Right<600)&&(Left>600)){
  moveRobot("Left");
 sendData("Left");
 }
 if((Right>600)&(Left<600)){
  moveRobot("Right");
   sendData("Right");
 }
 */digitalWrite(4,HIGH);   
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    delay(1000);
    Serial.println("Data transmitted");
 
}
