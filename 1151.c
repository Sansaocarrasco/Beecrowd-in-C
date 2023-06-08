#include <stdio.h>

int main (){
	int N,i,j,k,F;
	scanf("%d", &N);
	for (i=0,j=1,k=0;k<N;i+=j,j+=i)
	{
		k = k+1;
		if (k>N)break;
		if (k == 1) printf("%d", i);
		else printf(" %d", i);
		
		k+=1;
		if (k>N)break;
		printf(" %d", j);
		
	}
	printf("\n");
	return 0;
}
