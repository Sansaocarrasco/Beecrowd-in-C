#include <stdio.h>

int main(){
	
	int N,y;
	scanf("%d", &N);
	y = N;
	
	while (y%10 != 3)
	{
		y = y/10;
		if(y == 0)break;
	}
	
	if (y%100 == 13)printf("%d es de Mala Suerte\n", N);
	else printf("%d NO es de Mala Suerte\n", N);
	
	return 0;
}
