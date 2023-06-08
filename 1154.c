#include <stdio.h>

int main(){
	
	int i;
	float x,media;
	media = 0.0;
	
	for (i=0;;i++){
		scanf("%f", &x);
		if (x<0)break;
		media += x;
	}
	printf("%.2f\n", media/i);
	
	return 0;
}
