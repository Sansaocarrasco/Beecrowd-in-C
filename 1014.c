#include <stdio.h>

int main(){
	
	float X, Y, Consumo;
	
	scanf("%f", &X);
	scanf("%f", &Y);
	
	Consumo = X/Y;
	
	printf("%0.3f km/l\n", Consumo);
	
	return 0;
}
