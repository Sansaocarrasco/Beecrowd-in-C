#include <stdio.h>

int main(){
	
	int N,x,y,i,j;
	scanf("%d", &N);
	for (;N>0;N--){
		scanf("%d", &x);
		j = 0;
		i = 2;
		y =0;
		while(i <= x){
			if (x%i == 0){
				y += x/i;
			} 
			i++;
		}
		if (x==y) printf ("%d eh perfeito\n", x);
		else printf("%d nao eh perfeito\n", x);
	} 
	return 0;
}
