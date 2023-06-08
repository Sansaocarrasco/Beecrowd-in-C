#include <stdio.h>
#include <math.h>
int main (){
	
	double A, B, C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);
	
	TRIANGULO = (A * C)/2;
	CIRCULO = (3.14159 * pow(C, 2));
	TRAPEZIO = ((A + B) * C)/2;
	QUADRADO = pow(B,2);
	RETANGULO = A * B;
	
	printf("TRIANGULO: %0.3lf\n", TRIANGULO);
	printf("CIRCULO: %0.3lf\n", CIRCULO);
	printf("TRAPEZIO: %0.3lf\n", TRAPEZIO);
	printf("QUADRADO: %0.3lf\n", QUADRADO);
	printf("RETANGULO: %0.3lf\n", RETANGULO);
	
	return 0;
}
