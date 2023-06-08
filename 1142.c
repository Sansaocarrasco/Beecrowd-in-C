#include <stdio.h>
int main(){
	
	int N,i,j;
	scanf("%d", &N);
		for(j=0,i=1;N>0;i++,j+=4,N--){
			printf("%d %d %d PUM\n",j+1,j+2,j+3);
		}
	return 0;
}
