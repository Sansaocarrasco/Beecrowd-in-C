#include <stdio.h>

int main (){
	
	char nome [60];
	double salario, vendas, porcent, TOTAL;
	
	scanf("%s", &nome);
	scanf("%lf", &salario);
	scanf("%lf", &vendas);
	
	porcent = (vendas * 0.15);
	TOTAL = porcent + salario;
	printf("TOTAL = R$ %0.2lf\n", TOTAL);
	
	return 0;
}
