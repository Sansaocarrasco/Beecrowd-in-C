#include <stdio.h>

int main(){
	
	int N;
	float x,y,res;
	
	scanf("%d", &N);
	for (;N>0;N--){
		scanf("%f %f", &x,&y);
		res = x/y;
		if (y!=0)printf("%.1f\n", res);
		else if (y==0)printf("divisao impossivel\n");
	}
	return 0;
}
