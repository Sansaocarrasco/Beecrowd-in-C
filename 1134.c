#include <stdio.h>
int main(){
	int x,Alcool=0,Gasolina=0,Diesel=0;
	for (;;){
		x=0;
		scanf("%d", &x);
		if (x==1)Alcool++;
		if (x==2)Gasolina++;
		if (x==3)Diesel++;
		if (x==4)break;
	}
	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", Alcool,Gasolina,Diesel);
	return 0;
}
