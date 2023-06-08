#include <stdio.h>

int main(){
	
	int x, y, i, j;
	
	scanf("%d %d", &x, &y);
	if (x>y){i=x;x=y;y=i;}
	for(;x<y;x++){
		j = x+1;
		if (j%5 == 2 || j%5 == 3 && j<y)printf("%d\n", j);
	}
	return 0;
}
