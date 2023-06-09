#include <stdio.h>

int main(){
	int x, y, i, j;
	scanf("%d", &x);
	while(1){
		scanf("%d", &y);
		if (y>x) break;
	}
	for (i=0,j=1;x<y;j++){
		x = x+i;
		i = x+j;
	}
	printf("%d\n", j);
	
}
