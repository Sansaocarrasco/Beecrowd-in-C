#include <stdio.h>
int main(){
	
	double y, z;
	int x, i;
	i = 0;
	x = 0;
	z = 0.0;
	while (x < 6)
	{
		scanf("%lf", &y);
		if (y > 0.0)
		{
			i = i + 1;
			z = y + z;
		}
		x = x + 1;
	}
	printf("%d valores positivos\n%.1lf\n", i, z/i);

	
	return 0;
}
