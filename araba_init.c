/* 
 *  Initialize islemi
 *
 */

 void araba_init(void) {

  servo_motor.write(90);
  delay(2000);

  analogWrite(ena, LOW);
  analogWrite(enb, LOW);
  delay(2000);
  
 }
