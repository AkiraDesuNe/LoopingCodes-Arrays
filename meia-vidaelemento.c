#include <stdio.h>
int main ()
{
  int segundos=0;
  int t=0;
  int minutos=0;
  int horas=0;
  float m=0;
  int x=0;

  printf ("Digite o valor da massa em gramas: ");
  scanf ("%f", &m);

  for (x = m;x > 0.5;x-=m*0.5)
    {
      t++;
    }
    
 segundos = t * 50;
 minutos = (segundos / 60);
 horas = (minutos / 60);

  printf ("Tempo de meia-vida até 0.5g: %d segundos, %d minutos, %d horas",
	  segundos, minutos, horas);

  return 0;
}