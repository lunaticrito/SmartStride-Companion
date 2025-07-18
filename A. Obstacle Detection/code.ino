void setup()
{
  pinMode(12, OUTPUT);
}

long duration1, dis1,duration2, dis2,duration3, dis3;
void loop()
{
  noTone(12);
  pinMode(0, OUTPUT);
  digitalWrite(0, LOW);
  delayMicroseconds(2);
  digitalWrite(0, HIGH);
  delayMicroseconds(2);
  digitalWrite(0, LOW);
  pinMode(1, INPUT);
  duration1=pulseIn(1, HIGH);
  dis1= (duration1*0.034)/2;
  
  if (dis1<100)
  {
     tone(12, 500);
  }
  else
  {
   noTone(12);
  }
  
  pinMode(2, OUTPUT);
  digitalWrite(2, LOW);
  delayMicroseconds(2);
  digitalWrite(2, HIGH);
  delayMicroseconds(2);
  digitalWrite(2, LOW);
  pinMode(3, INPUT);
  duration2=pulseIn(3, HIGH);
  dis2= (duration2*0.034)/2;
 
  if (dis2<100)
  {
     tone(12, 700);
  }
  else
  {
  noTone(12);
  }


  pinMode(4, OUTPUT);
  digitalWrite(4, LOW);
  delayMicroseconds(2);
  digitalWrite(4, HIGH);
  delayMicroseconds(2);
  digitalWrite(4, LOW);
  pinMode(5, INPUT);
  duration3=pulseIn(5, HIGH);
  dis3= (duration3*0.034)/2;
  
  
  if (dis3<100)
  {
    tone(12, 700);
  }
  else
  {
   noTone(12);
  }
  delay(100);
}