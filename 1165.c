#include <stdio.h>

int main(){
	
	int N,i,j,k;
	scanf("%d", &N);
	i = 1;
	k=0;
	for (;N>0;N--){
		scanf("%d", &N);
		for (j=1;i<=N;i++,j++){
		if (N%i == 0) {
			if (i!=N)k = k+i;
		}
    	}
	
	}
	
	if (k==N)printf("%d eh perfeito\n", N);
	else printf("%d nao eh perfeito\n", N);
	return 0;
}
