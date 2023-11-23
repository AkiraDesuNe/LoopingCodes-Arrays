#include <stdio.h>

int main()
{
  int i;
  float valores [15];
  
  printf ("Questão01\n");
  
  for (i = 0;i < 15 ;i++) {
  printf ("Digite o %dº valor: \n",i + 1);
  scanf ("%f",&valores[i]);
  
  
  }
  
  for (i = 0;i < 15 ;i++) {
  
  printf ("o %dº valor: %.1f \n", i + 1,valores[i]);
  
  }
  
  

    return 0;
}
