#include <stdio.h>

int main(){
	
	int i;
	float S,j;
	for (i=1,j=1.0, S=0.0;i<=100;i++,j++){
		S +=  (1/j);
	}
	printf("%.2f\n", S);
	return 0;
}
