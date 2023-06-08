#include <stdio.h>

int main(){
	int i,j;
	
	for (i=1; i<10; i= 2+i){
		for(j=7; j>=5; j--){
			printf("I=%d J=%d\n", i,j);
		}
		if (i==3){
			for(j=j+4; j<=15; j--){
			printf("I=%d J=%d\n", i,j);
		}
	}
	return 0;
}
