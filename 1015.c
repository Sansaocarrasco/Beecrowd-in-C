#include <stdio.h>
#include <math.h>

int main(){
	
	float x1, y1, x2, y2, x, y, Distancia;
	
	scanf("%f%f", &x1, &y1);
	scanf("%f%f", &x2, &y2);
	
	x = x2 - x1;
	y = y2 - y1;
	Distancia = sqrt(pow(x, 2) + pow(y, 2));
	
	printf("%0.4f", Distancia);
	
	return 0;
}
