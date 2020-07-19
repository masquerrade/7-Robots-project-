void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);

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
  void turnLeft(){
    int M_temp=1;
    while(M_temp!=0){
      moveRobot("Left");
      delay(100);
      moveRobot("Stop");
      delay(100);
      M_temp=digitalRead(3);
    }
  }
    void turnRight(){
    int L_temp=1;
    while(L_temp!=0){
      moveRobot("Right");
      delay(100);
      moveRobot("Stop");
      delay(100);
      L_temp=digitalRead(2);
    }
  }
  

void loop() {
  // put your main code here, to run repeatedly:
 int l=digitalRead(2);
 int m=digitalRead(3);
 int r=digitalRead(4);
// Serial.println("Value of Right Sensor is :"+String(Right));
// Serial.print("\t");
// Serial.println("Value of Left Sensor is :"+String(Left));
 //delay(1000);
 if((l==0)&&(m==0)&&(r==1)){
  turnLeft();
 }
 if((l==0)&&(m==1)&&(r==0)){
  turnLeft();
 }
 if((l==0)&&(m==1)&&(r==1)){
  turnLeft();
 }
 if((l==1)&&(m==0)&&(r==0)){
  moveRobot("Forward");
  delay(100);
  moveRobot("Stop");
  delay(100);
 }
 if((l==1)&&(m==0)&&(r==1)){
  moveRobot("Forward");
  delay(100);
  moveRobot("Stop");
  delay(100);
 }
  if((l==1)&&(m==1)&&(r==0)){
  moveRobot("Forward");
  delay(100);
  moveRobot("Stop");
  delay(100);
  turnRight();
 }
 if((l==1)&&(m==1)&&(r==1)){
  moveRobot("Forward");
  delay(100);
  moveRobot("Stop");
  delay(100);
  int L_temp=digitalRead(2);
  int M_temp=digitalRead(3);
  int R_temp=digitalRead(4);
  if((L_temp==1)&&(M_temp==1)&&(R_temp==1)){
    turnLeft();
    }
   }  
    if((l==0)&&(m==0)&&(r==0)){
  moveRobot("Forward");
  delay(100);
  moveRobot("Stop");
  delay(100);
  int L_temp=digitalRead(2);
  int M_temp=digitalRead(3);
  int R_temp=digitalRead(4);
  if((L_temp==0)&&(M_temp==0)&&(R_temp==0)){
   moveRobot("Stop");
   exit(0);
    }
    else{
      turnLeft();
      }
   }  
 }
