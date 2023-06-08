#include <stdio.h>
int main(){
  int B, G, x;
  
  scanf("%d %d", &B, &G);
  x = G/2;
  x = x - B; 
  if (x<=0) printf("Amelia tem todas bolinhas!\n");
  else printf ("Faltam %d bolinha(s)\n",x);

  return 0;
}
