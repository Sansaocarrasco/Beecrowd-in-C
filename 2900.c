#include <stdio.h>

int main (){
	
	int N, i, Ci, Vi, pares;

	i = 1;
	pares = 0;
	while(i != 0)
	{
		scanf("%d", &N);
		if (N == 0)break;
		i = N;
		scanf("%d%d", &Ci, &Vi);
		pares += Vi/2;
		i = i - 1;
	}
	if (pares != 0){
		pares = pares/2;
		printf("%d", pares);
	}
	else

	return 0;
	
}
