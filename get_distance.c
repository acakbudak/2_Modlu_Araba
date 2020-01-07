/*Mesafe olcumu yapılma islemlerinin yurutuldugu
 fonksiyon icerir.
 */



int get_distance(void){

  long duration, distance;

  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  duration = pulseIn(echo,HIGH);
  distance = duration/58.2;
  delay(100);

      if(distance >=0 && distance <=90)
      return distance;
      
}
