#include <stdio.h>
int main(){
	
	int N,total,Q,com1,com2,com3;
	char c;
	float i,j,k;
	
	scanf("%d", &N);
	for (total=0,i=0,j=0,k=0; N>0; N--){
		scanf("%d %c", &Q, &c);
		total = Q + total;
	    if (c == 'C') i = Q + i;
		else if (c == 'R')j= Q + j;
		else if (c == 'S')k= Q + k;
	}
	
	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %0.0f\n", i);
	printf("Total de ratos: %0.0f\n", j);
	printf("Total de sapos: %0.0f\n", k);
	i = (i/total)*100;
	j = (j/total)*100;
	k = (k/total)*100;
	printf("Percentual de coelhos: %.2f %%\n", i);
	printf("Percentual de ratos: %.2f %%\n", j);
	printf("Percentual de sapos: %.2f %%\n", k);

	return 0;
}
