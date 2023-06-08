#include <stdio.h>

int main(){
	
	float A, B, C, P1, P2, P3, MEDIA;
	scanf("%f", &A);
	scanf("%f", &B);
	scanf("%f", &C);
	P1 = 2;
	P2 = 3;
	P3 = 5;
	
	MEDIA = (A * P1 + B * P2 + C * P3)/10;
	printf("MEDIA = %0.1f\n", MEDIA);
	
	return 0;
}
