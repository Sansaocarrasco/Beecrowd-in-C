#include <stdio.h>

int main(){
	int x,y;
	
	for (;;){
		scanf("%d %d", &x, &y);
		if (x>0 && y>0)printf("primeiro\n");
		if (y>0 && x<0)printf("segundo\n");
		if (x<0 && y<0)printf("terceiro\n");
		if (x>0 && y<0)printf("quarto\n");
		else if (x==0 || y==0)break;
	}
	return 0;
}
