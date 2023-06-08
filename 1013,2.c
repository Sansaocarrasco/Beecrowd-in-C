#include <stdio.h>

int main(){
	
	int A, B, C;
	
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	
	if (A > B & A > C){
		printf("%d eh o maior\n", A);
	}
	
	if (B > A & B > C){
		printf("%d eh o maior\n", B);
	}
	
	if (C > A & C > B){
		printf("%d eh o maior\n", C);
	}
	
	return 0;
}
