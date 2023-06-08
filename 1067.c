#include <stdio.h>

int main(){
	
	int x,y;
	scanf("%d", &x);
	y = 1;
	
	while (y <= x)
	{
		printf("%d\n", y);
		y = y + 2;
	}
	
	return 0;
}
