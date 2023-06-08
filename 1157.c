#include <stdio.h>

int main(){
	
	int N,i,j;
	scanf("%d", &N);
	i = 1;
	for (j=1;i<=N;i++,j++){
		if (N%i == 0) printf("%d\n", i);
		
	}
	return 0;
}
