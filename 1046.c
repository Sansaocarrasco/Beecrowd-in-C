#include <stdio.h>
int main (){
	
	int A, B, X;
	scanf("%d%d", &A,&B);
	
	if ( A > B)
	{
		X = (24 - A) + B;
		printf ("O JOGO DUROU %d HORA(S)\n", X);
	}
	else if (A < B)
	{
		X = (B - A);
		printf ("O JOGO DUROU %d HORA(S)\n", X);
	}
	else if (B == A)
	{
		printf("O JOGO DUROU 24 HORA(S)\n");
	}
	
	return 0;
}
