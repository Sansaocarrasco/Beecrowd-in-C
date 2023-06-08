#include <stdio.h>

int main(){
	
	int x,i;
	scanf("%d", &x);
	i = 1;
	
	while (i <= 6)
	{
		if (x%2 != 0)
		{
			printf("%d\n", x);
		    x = x + 2;
		    i = i + 1;
		}
		if (x%2 == 0) 
		{
			printf ("%d\n", x + 1);
		    x = x + 2;
		    i = i + 1;
		}
	}
	
	return 0;
}
