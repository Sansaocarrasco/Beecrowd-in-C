#include <stdio.h>

int main (){
	int X,i;
	
	for (;;){
		scanf("%d", &X);
		for (i=1;i<=X;i++){
			if (i==X) printf("%d", i);
			else printf ("%d ", i);
		}
		if (X==0)break;
		printf("\n");
	}
	return 0;
}
