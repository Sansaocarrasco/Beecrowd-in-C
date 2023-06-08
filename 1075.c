#include <stdio.h>

int main(){
	
	int N,i,j;
	scanf("%d", &N);
	
	for (i=N,j=2; j<10000; j++, i=N){
		i = j%N;
		if (i == 2)printf("%d\n", j);
	}
	
	return 0;
}
