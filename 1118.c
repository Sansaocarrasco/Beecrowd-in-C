#include <stdio.h>
int main(){
	int i,j;
	float x, media;
	
	while(1){
		media = 0.0;
		for (i=0; i<2; ){
			scanf("%f", &x);
			if (x>=0.0 && x<=10.0){
				media+= x;
				i++;
			}
			else printf("nota invalida\n");
		}
		if (i==2){
			printf("media = %.2f\n", media/2);
			while(1){
				printf ("novo calculo (1-sim 2-nao)\n");
				scanf("%d", &j);
				if (j == 1)break;
				else if (j == 2)break;
			}
			if (j==2)break;
		}
	}
	return 0;
}
