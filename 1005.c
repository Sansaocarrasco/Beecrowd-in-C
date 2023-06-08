#include <stdio.h>

int main(){
	
	float A, B, P1, P2, MEDIA;
	scanf("%f", &A);
	scanf("%f", &B);
	P1 = 3.5;
	P2 = 7.5;
	
	MEDIA = (A * P1 + B * P2)/11;
	
	printf("MEDIA = %0.5f\n", MEDIA);
	
	return 0;
}
