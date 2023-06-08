#include <stdio.h>

int main(){
  
  int N,ano1,mes1,dia1,ano2,dia2,mes2;
  float Ju,Sa;
  scanf("%d",&N);
  Ju = 11.9 * (365.25 * N);
  Sa = 29.6 * (365.25 * N);
  ano1 = 119 * N;
  mes1 = ano1%10;
  mes1 = ano1;
  
  printf("Dias terrestres para Jupiter = %f", Ju);
  printf("Data terrestre para Jupiter:");
  printf("Dias terrestres para Saturno = %f", Sa);
  printf("Data terrestre para Saturno: ");
  return 0;
}
