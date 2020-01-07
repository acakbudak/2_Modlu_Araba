/*
 * Cizgi izleyen robot modu icin gerekli arduino loop kodu
 */

void park_et(void)
{
  int sensor_1= analogRead(A6);
  int sensor_2= analogRead(A7);

  if( sensor_1<400 && sensor_2<400)
  {
    ileri_git_yavas();

  }
  if( sensor_1>400 && sensor_2<400)
  {
    sola_don();
  }
  if( sensor_1<400 && sensor_2>400)
  {
    saga_don();
  }

  
}
 
