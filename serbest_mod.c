/*
 * Engelden kacan robot modu icin gerekli arduino loop kodu
 */

void serbest_mode(void){

     get_distance();
     if(get_distance()<=30){
      analogWrite(ena, LOW);
      analogWrite(enb, LOW);
      int donme_sag,donme_sol; 
      int rastgele_deger= random(0,10);
      
      servo_motor.write(0);
      delay(1000);
      donme_sag = get_distance();
      delay(500); 

      servo_motor.write(180);
      delay(1000);
      donme_sol=get_distance();
      delay(500);
      servo_motor.write(90);
      delay(500);
      
      
      if( donme_sag>30 &&  donme_sol<30){
        for(int32_t x=0; x<30000; x++)
        saga_don();
       }
       if( donme_sol>30 &&  donme_sag<30){
        for(int32_t y=0; y<30000; y++)
        sola_don();
       }
       if( donme_sol<30 &&  donme_sag<30){
         for(int32_t i=0 ; i<40000; i++)
         geri_don();
       }
       if(donme_sol>30 && donme_sag>30){
        if(rastgele_deger<5){
        for(int32_t x=0; x<30000; x++)
        saga_don();
        }
        else{
          for(int32_t y=0; y<30000; y++)
        sola_don();
        }
       }
       servo_motor.write(90);
     }
    
     else
       
       ileri_git();
  
}
