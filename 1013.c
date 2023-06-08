#include <stdio.h>

int main(){
	
	int A, B, C, MaiorAB, MaiorAC;
	
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	
	MaiorAB = (A + B + abs(A-B)) / 2;
	MaiorAC = (MaiorAB + C + abs(MaiorAB-C)) / 2;
	
	printf("%d eh o maior\n", MaiorAC);
	return 0;
}
