#include <stdio.h>

int main(){
	int n,i,j,k,l;
	scanf("%d", &n);
	n = n*n;
	
	for (k=0,i=1;i<n;i+=2)k++;
	for (j=0;j<n;j+=2)l++;
	printf("%d casas brancas e %d casas pretas\n",l,k);
	return 0;
}
