#include <stdio.h>
int main(){
	
	float A, B, C, area, peri;
	
	scanf("%f%f%f", &A,&B,&C);
	peri = A + B + C;

	if ( (A + B) > C && (A + C) > B && (C + B) > A)printf("Perimetro = %.1f", peri);
	else 
	{
		area = ((A+B)*C)/2;
	    printf("Area = %.1f", area);
	}
	return 0;
}
