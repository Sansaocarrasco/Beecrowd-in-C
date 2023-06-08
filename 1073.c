#include <stdio.h>

int main(){
	
	int N,i,j;
	scanf("%d", &N);
	
	for (i=1; i<N; i++){
		if (i%2 == 0){
			j = i*i;
			printf ("%d^2 = %d\n", i,j);
		}
		
	}
	if (i==N && N%2 == 0){
		j = i*i;
		printf("%d^2 = %d\n", i,j);
	}
	
	return 0;
}
