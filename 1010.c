#include <stdio.h>

int main (){
	
	int peca1, npecas1, peca2, npecas2;
	float valor1, valor2, VALOR;
	
	scanf("%d", &peca1);
	scanf("%d", &npecas1);
	scanf("%f", &valor1);
	scanf("%d", &peca2);
	scanf("%d", &npecas2);
	scanf("%f", &valor2);
	
	VALOR = ((npecas1 * valor1) + (npecas2 * valor2));
	
	printf("VALOR A PAGAR: R$ %0.2f\n", VALOR);	
		
	return 0;
}
