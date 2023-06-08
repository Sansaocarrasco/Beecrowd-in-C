#include <stdio.h>

int main(){
	
	int N,X,Y,i,s;
	scanf("%d", &N);
	for (;N>0;N--){
		s = 0;
		scanf("%d %d", &X, &Y);
		if (X>Y){i=X; X=Y; Y=i;}
		while(X<Y){
			X = X+1;
			if (X<Y && X%2 != 0)s+=X;
		}
		printf("%d\n", s);
	}
	return 0;
}
