#include <stdio.h>
#include <string.h>
int main(void){
	
	char x[20];
	int tamanho;
		
	fgets(x,20,stdin);
	tamanho = strlen(x);
	tamanho = tamanho -1;
	
	if (tamanho >= 10)printf("palavrao\n");
	else printf("palavrinha\n");
	
	return 0;
}
