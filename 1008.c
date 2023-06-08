#include <stdio.h>

int main (){
	
	int NUMBER, HORAS;
	float TIME, SALARY;
	scanf("%d", &NUMBER);
	scanf("%d", &HORAS);
	scanf("%f", &TIME);

	SALARY = HORAS * TIME;
	
	printf("NUMBER = %d\n", NUMBER);
	printf("SALARY = U$ %0.2f\n", SALARY);
	
	return 0;
}
