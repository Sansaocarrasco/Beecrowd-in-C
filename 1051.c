#include <stdio.h>
int main(){
	
	float sala, imp;
	imp = 0.0;
	scanf("%f", &sala);
	
	if (sala > 4500.00){
		imp += (sala - 4500) * 0.28;
		sala -= (sala - 4500);
	}
	if (sala > 3000.00){
		imp += (sala - 3000) * 0.18;
		sala -= (sala - 3000);
	}
	if (sala > 2000.00){
		imp += (sala - 2000) * 0.08;
		sala -= (sala - 2000);
	}
	
	if (imp == 0.0)printf("Isento\n");
	
	else printf("R$ %.2f\n", imp);
	return 0;
}
