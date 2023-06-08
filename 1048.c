#include <stdio.h>

int main(){
	
	float x,y;
	scanf("%f", &x);
	y = x;
	if (x>0 && x <= 400.00){
		y = x*0.15;
		x = x*1.15;
		printf("Novo salario: %.2f\n", x);
		printf("Reajuste ganho: %.2f\n", y);
		printf("Em percentual: 15 %%\n");
	}
	else if (x>400.01 && x <= 800.00){
		y = x*0.12;
		x = x*1.12;
		printf("Novo salario: %.2f\n", x);
		printf("Reajuste ganho: %.2f\n", y);
		printf("Em percentual: 12 %%\n");
	}
	else if (x>800.01 && x <= 1200.00){
		y = x*0.10;
		x = x*1.10;
		printf("Novo salario: %.2f\n", x);
		printf("Reajuste ganho: %.2f\n", y);
		printf("Em percentual: 10 %%\n");
	}
	else if (x>1200.01 && x <= 2000.00){
		y = x*0.07;
		x = x*1.07;
		printf("Novo salario: %.2f\n", x);
		printf("Reajuste ganho: %.2f\n", y);
		printf("Em percentual: 7 %%\n");
	}
	else if (x > 2000.00){
		y = x*0.04;
		x = x*1.04;
		printf("Novo salario: %.2f\n", x);
		printf("Reajuste ganho: %.2f\n", y);
		printf("Em percentual: 4 %%\n");
	}
	
	return 0;
}
