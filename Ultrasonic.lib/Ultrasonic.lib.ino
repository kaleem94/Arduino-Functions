int ultrasonic_sensor(int trigPin,int echoPin)
{
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  return ((pulseIn(echoPin, HIGH)/2)/ 29.1);
  
}

