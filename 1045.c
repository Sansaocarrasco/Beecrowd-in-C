#include <stdio.h>
#include <math.h>
int main(){
	
	double A,B,C,i, raiz;
	scanf("%lf%lf%lf", &A,&B,&C);
	i = A;
	
	if(A > B){
		if (A > B)
		{
			if(A > C)A=i;
			if(A < C){
				A = C;
				C = i;
			}
		}
		else if (B > A)
		{
			if (B > C){
				A = B;
				B = i;
			}
			if (B < C){
				A = C;
				C = i;
			}
		}
		else if (C > A){
		    if (C > B && B > A){
		    	A = C;
		    	C = i;
			}
			if (C < B){
				A = B;
				B = i;
			}
		}
    }
	raiz = sqrt(pow(B,2) + pow(C,2));
	
	if (A >= B+C)printf ("NAO FORMA TRIANGULO\n");
	else if(A == raiz)printf("TRIANGULO RETANGULO\n");
    else if (A > raiz)printf("TRIANGULO OBTUSANGULO\n");
	else if (A < raiz)printf("TRIANGULO ACUTANGULO\n");
	
	if (A == B || B == C || C == A )
	{
		if (A == B && A == C)printf("TRIANGULO EQUILATERO\n");
		else printf("TRIANGULO ISOSCELES");
    }
	
	return 0;
}
