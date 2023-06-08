#include <stdio.h>

int main(){
	
	int N,i;
	scanf("%d", &N);
	int x[N];
	
	for (i=0; N>0; i++,N--){
		scanf("%d", &x[i]);
	}
	for (N=0; i>0; N++){
		printf ("resposta %d: %d\n",N+1,x[N]);
		i = i-1;
	}	
	return 0;
}
