#include <stdio.h>

int main (){
	
	float X, temp;
	
	scanf("%f", &X);
	temp = (X / 30) * 60;
	printf ("%0.0f minutos\n", temp);
	
	return 0;
}
