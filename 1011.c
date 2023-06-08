#include <stdio.h>
#include <math.h>
int main (){
	
	double VOLUME, R;
	
	scanf("%lf", &R);
	VOLUME = (4 * 3.14159 * pow(R, 3.0))/3;
	printf("VOLUME = %0.3lf\n", VOLUME);
	
	return 0;
}
