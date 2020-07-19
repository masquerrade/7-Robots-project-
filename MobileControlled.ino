void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);

}
void moveRobot(String motion){
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

void loop() {
  // put your main code here, to run repeatedly:
 int d0=digitalRead(4);
 int d1=digitalRead(5);
 int d2=digitalRead(6);
 int d3=digitalRead(7);
Serial.print(String(d3)+" "+String(d2)+" "+String(d1)+" "+String(d0)+" ");
 delay(1000);
 if((d3==0)&&(d2==0)&&(d1==1)&&(d0==0)){
  moveRobot("Forward");
 Serial.println("Forward");
 }
 if((d3==1)&&(d2==0)&&(d1==0)&&(d0==0)){
  moveRobot("Backward");
  Serial.println("Backward");
 }
 if((d3==0)&&(d2==1)&&(d1==1)&&(d0==0)){
  moveRobot("Right");
  Serial.println("Right");
 }
 if((d3==0)&&(d2==1)&&(d1==0)&&(d0==0)){
  moveRobot("Left");
  Serial.println("Left");
 }
 if((d3==0)&&(d2==1)&&(d1==0)&&(d0==1)){
  moveRobot("Stop");
  Serial.println("Stop");
 }
 
}
