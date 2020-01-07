/*
 * hareketler.c icin gerekli header dosyası
 */

#ifndef _HAREKETLER_H
#define _HAREKETLER_H
#include <Arduino.h>

#define in1 8     // Motor sürücümüze bağladığımız pinleri tanımlıyoruz
#define in2 7    
#define in3 12 
#define in4 4 
#define ena 6 
#define enb 5


 void dur(void);
 void geri_don(void);
 void ileri_git(void);
 void ileri_git_yavas(void);
 void saga_don(void);
 void sola_don(void); 

#endif
