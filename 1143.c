#include <stdio.h>
int main(){
	int N,i;
	scanf("%d", &N);
	for (i=1;N>0;i++,N--){
		printf("%d %d %d\n", i,i*i,i*i*i);
	}
	return 0;
}
