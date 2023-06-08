#include <stdio.h>
int main(){
	
	double y;
	int x, i;
	i = 0;
	x = 0;
	while (x < 6)
	{
		scanf("%lf", &y);
		if (y > 0.0)
		{
			i = i + 1;
		}
		x = x + 1;
	}
	printf("%d Valores positivos\n", i);
	
	return 0;
}
