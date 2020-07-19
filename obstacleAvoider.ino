void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  //pinMode(A1,INPUT);
  //pinMode(A2,INPUT);

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
 int xaxis=analogRead(A1);
 int yaxis=analogRead(A2);
Serial.print("Value of xAxis is :"+String(xaxis));
Serial.print("\t");
Serial.println("Value of yAxis is :"+String(yaxis));
 delay(1000);
 if(xaxis<300){
  moveRobot("Forward");
 
 }
 if(xaxis>390){
  moveRobot("Backward");
  
 }
 if(yaxis>385){
  moveRobot("Right");
 }
 if(yaxis<290){
  moveRobot("Left");
 }
 if( (xaxis>300)&&(xaxis<390)&&(yaxis>290)&&(yaxis<385)){
  moveRobot("Stop");
 }
 
}
