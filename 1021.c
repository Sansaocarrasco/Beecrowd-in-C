#include <stdio.h>
int main (){
	
	int i;
	double y;
	scanf("%lf", &y);
	printf("NOTAS:\n");
	i= 0.0;
	while (y >= 100)
	{
		y = y - 100;
		i = i + 1;
	}
	printf("%d nota(s) de R$ 100\n", i);
	i = 0.0;
	while (y >= 50)
	{
		y = y - 50;
		i = i + 1;
	}
	printf("%d nota(s) de R$ 50\n", i);
	i = 0.0;
	while (y >= 20)
	{
		y = y - 20;
		i = i + 1;
	}
	printf("%d nota(s) de R$ 20\n", i);
	i = 0.0;
	while (y >= 10)
	{
		y = y - 10;
		i = i + 1;
	}
	printf("%d nota(s) de R$ 10\n", i);
	i = 0.0;
	while (y >= 5)
	{
		y = y - 5;
		i = i + 1;
	}
	printf("%d nota(s) de R$ 5\n", i);
	i = 0.0;
	while (y >= 2)
	{
		y = y - 2;
		i = i + 1;
	}
	printf("%d nota(s) de R$ 2\n", i);
	i = 0.0;
	printf("MOEDAS:\n");
	while (y >= 1)
	{
		y = y - 1;
		i = i + 1;
	}
	printf("%d moeda(s) de R$ 1\n", i);
	i = 0.0;
	while (y >= 0.50)
	{
		y = y - 0.50;
		i = i + 1;
	}
	printf("%d moeda(s) de R$ 0.50\n", i);
	i = 0.0;
	while (y >= 0.25)
	{
		y = y - 0.25;
		i = i + 1;
	}
	printf("%d moeda(s) de R$ 0.25\n", i);
	i = 0.0;
	while (y >= 0.10)
	{
		y = y - 0.10;
		i = i + 1;
	}
	printf("%d moeda(s) de R$ 0.10\n", i);
	i = 0.0;
	while (y >= 0.05)
	{
		i = i + 1;
		y = y - 0.05;
	}
	printf("%d moeda(s) de R$ 0.05\n", i);
	i = 0.0;
	while (y >= 0.01)
	{
		y = (y - 0.01);
		i = i + 1;
	}
	printf("%d moeda(s) de R$ 0.01", i);
	return 0;
}
