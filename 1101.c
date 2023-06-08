#include <stdio.h>

int main(){
	
	int N,M,i,j,S,t;
	t = 0;
	i = 1;
	for (; i;i++){
		S = 0;
		scanf("%d %d", &N, &M);
		if (N<=0 || M<= 0)break;
		if (N<M){
			t = N;
			N = M;
			M = t;
		}
		for (j=M ; j<=N; j++){
			printf("%d ", j);
			S = j + S; 
		}
		printf("Sum=%d\n", S);
	}
	return 0;
}
