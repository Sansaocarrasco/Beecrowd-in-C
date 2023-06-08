#include <stdio.h>
int main (){
	
	int X,Y,i;
	scanf("%d %d", &X,&Y);
	if (X<Y){i=X;X=Y;Y=i;}
	for (i=0;Y<=X;Y++){
		if (Y%13 != 0)i+=Y; 
	}
	printf("%d\n", i);
	return 0;
}
