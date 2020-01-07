#include "hareketler.c"
#include "hareketler.h"
#include <Servo.h>
Servo servo_motor;
/*
 ***************************************************************************
 **************Akıllı Araba deneme ve AGV duzenleme*************************
 ***************************************************************************

 1)Serbest gezen robot modu ya da park etme modu

  -Serbest modda iken 
    mesafe sensoru kontrol et,
    15cm üzeri ise,
    iki dc motor da ileri,
    5 saniye ileri git ve dur,
    engel varsa servo dön ve olcum al,
    15 cm den uzak yone don,
    yoksa arkaya don,
    => servo_init()
    

  -Park modunda iken
    Cizgi izleyen robot seklinde hareket icin;
    IR sensorlerden veri al
    Sensorlerden gelen verilere gore saga sola git
    Ya da düz git
    Keskin donuslerde ozel kod ile don
  
  
  => servo_init()
  => dc_motor_init()
  => distance_get()
  
 
 */





#define trig 9
#define echo 10



void setup() 
 
{
  
pinMode(in1, OUTPUT);  //Tüm pinlerden güç çıkışı olacağı için OUTPUT olarak ayarladık.
pinMode(in2, OUTPUT);  
pinMode(in3, OUTPUT);
pinMode(in4, OUTPUT);
pinMode(ena, OUTPUT);
pinMode(enb, OUTPUT);
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
pinMode(A0, INPUT);
pinMode(A6, INPUT);
pinMode(A7, INPUT);

// Servo motor init
servo_motor.attach(3);
araba_init();

}
 
void loop() 
 
{   
     park_et();
     //serbest_mode();
      
}
