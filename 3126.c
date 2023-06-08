#include <stdio.h>

int main(){
	
	int C,i,j;
	
	scanf("%d", &C);
	j = 0;
	for (;C>0;C--){
		scanf("%d", &i);
		if (i==1) j++;
	}
	printf("%d\n", j);
	
	return 0;
}
