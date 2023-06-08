#include <stdio.h>

int main(){
	
	int a,b,c,d,e,x;
	scanf("%d\n%d\n%d\n%d\n%d\n",&a,&b,&c,&d,&e);
	x = 0;
	if (a%2 == 0)x = x + 1;
	if (b%2 == 0)x = x + 1;
	if (c%2 == 0)x = x + 1;
	if (d%2 == 0)x = x + 1;
	if (e%2 == 0)x = x + 1;
	
	printf("%d valores pares", x);
	
	return 0;
}
