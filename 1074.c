#include <stdio.h>

int main(){
	
	int x,i;
	scanf("%d", &x);
	
	for (i=x; i>0; i--){
		x = 0;
		scanf("%d", &x);
		if (x>0){
			if(x%2 == 0)printf("EVEN POSITIVE\n");
			else printf("ODD POSITIVE\n");
		}
		else if (x<0){
			if (x%2 == 0)printf("EVEN NEGATIVE\n");
			else printf("ODD NEGATIVE\n");
		}
		else printf("NULL\n");
	}
	
	return 0;
}
