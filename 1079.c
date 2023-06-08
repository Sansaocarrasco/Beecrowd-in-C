#include <stdio.h>

int main(){
	
	int N;
	float x,y,z;
	scanf("%d", &N);
	
	while (N > 0){
		scanf("%f%f%f", &x, &y, &z);
		x = ((x*2) + (y*3) + (z*5))/10;
		printf("%.1f\n", x);
		N = N - 1;
	}

	return 0;
}
