#include <stdio.h>

int main(){
	
	int a,b,c,d,e,x,y,x1,y1;
	scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
	x = 0;
	y = 0;
	x1 = 0;
	y1 = 0;
	if (a%2 == 0)x = x + 1;
	else y = y + 1;
	if (b%2 == 0)x = x + 1;
	else y = y + 1;
	if (c%2 == 0)x = x + 1;
	else y = y + 1;
	if (d%2 == 0)x = x + 1;
	else y = y + 1;
	if (e%2 == 0)x = x + 1;
	else y = y + 1;
	
	if (a > 0)x1 = x1 + 1;
	else if(a < 0) y1 = y1 + 1;
	if (b > 0)x1 = x1 + 1;
	else if(b < 0) y1 = y1 + 1;
	if (c > 0)x1 = x1 + 1;
	else if(c < 0) y1 = y1 + 1;
	if (d > 0)x1 = x1 + 1;
	else if(d < 0) y1 = y1 + 1;
	if (e > 0)x1 = x1 + 1;
	else if(e < 0) y1 = y1 + 1;
	
	printf("%d valor(es) par(es)\n", x);
	printf("%d valor(es) impar(es)\n", y);
	printf("%d valor(es) positivo(s)\n", x1);
	printf("%d valor(es) negativo(s)\n", y1);
	
	return 0;
}
