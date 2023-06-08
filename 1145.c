#include <stdio.h>

int main(){
	int X, Y,i,k,l;
	scanf("%d %d", &X, &Y);
	i=X;
	k=1;
	for (; X<=Y;X=X+i){
		for (l=i;l>0;k++,l--){
			
			if (l==1)printf(" %d", k);
			else if (l==2)printf("%d", k);
			else printf("%d ", k);
		}
		printf("\n");
	}
	return 0;
}
