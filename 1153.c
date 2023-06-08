#include <stdio.h>

int main (){
	int N,i,F;
	scanf("%d", &N);
	F = N;
	for (i=2;i<N;i++){
		F= F * i;
	}
	printf("%d\n", F);
	return 0;
}
