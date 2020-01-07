#include "hareketler.h"

/*
 * Temel robot hareketlerini saglayan fonksiyonlar
   icerir.
 */
void geri_don(void){
  
    // motor 1
digitalWrite(in1, HIGH);
digitalWrite(in2,  LOW);  
// motor 2
digitalWrite(in3, HIGH);
digitalWrite(in4,  LOW);

analogWrite(ena, 150);
analogWrite(enb, 150);

}

void dur(void){
  analogWrite(ena, LOW);
  analogWrite(enb, LOW);
}

void ileri_git_yavas(void)
{
 // motor 1
digitalWrite(in1, HIGH);
digitalWrite(in2,  LOW);  
// motor 2
digitalWrite(in3, LOW);
digitalWrite(in4,  HIGH);

analogWrite(ena, 80);
analogWrite(enb, 80);
  
}


void ileri_git(void){
  // motor 1
digitalWrite(in1, HIGH);
digitalWrite(in2,  LOW);  
// motor 2
digitalWrite(in3, LOW);
digitalWrite(in4,  HIGH);

analogWrite(ena, 150);
analogWrite(enb, 150);
}

void saga_don(void){
  // motor 2
digitalWrite(in3, LOW);
digitalWrite(in4,  HIGH);

analogWrite(ena, LOW);
analogWrite(enb, 150);
}

void sola_don(void){
  // motor 1
digitalWrite(in1, HIGH);
digitalWrite(in2,  LOW);  


analogWrite(ena, 150);
analogWrite(enb, LOW);
}
