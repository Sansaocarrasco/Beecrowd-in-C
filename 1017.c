#include <stdio.h>

int main(){
	
	int x, y;
	float z;
	
	scanf("%d", &x);
	scanf("%d", &y);

	z = (x * y)/12.0;
	
	printf("%.3f\n", z);	
	
	return 0;
}
