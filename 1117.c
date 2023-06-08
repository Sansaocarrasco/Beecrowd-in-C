#include <stdio.h>

int main(){
	int i;
	float x, media;
	media =0.0;
	for (i=1; i<=2;){
		scanf("%f", &x);
		if (x>=0 && x<=10.0){
			media+= x;
			i++;
		}
		else printf("nota invalida\n");
	}
	printf("media = %.2f\n", media/2);
	
	return 0;
}
