#include <stdio.h>

int main (){
	
	int X, H, M, S;
	float R;
	
	scanf("%d", &X);
	
	H = X/3600;
	R = X%3600;
	M = R/60;
	S = X%60;
	
	printf("%d:%d:%d\n", H, M, S);
	return 0;
}
