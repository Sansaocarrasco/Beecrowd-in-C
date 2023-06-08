#include <stdio.h>

int main(){
	
	float N1,N2,N3,N4, media,exam;
	
	scanf("%f%f%f%f\n", &N1,&N2,&N3,&N4);
	scanf("%f", &exam);
	media = (N1*2 + N2*3 + N3*4 + N4*1)/10;
	printf("Media: %.1f\n", media);
	
	if (media >= 7.00)printf("Aluno aprovado.\n");
	if (media < 5.00)printf("Aluno reprovado.\n");
	
	else if (media >= 5.00 && media <= 6.9)
	{
		printf("Aluno em exame.\n");
		printf("Nota do exame: %.1f\n", exam);
		media = (media + exam)/2;
		if (media > 5.00)printf("Aluno aprovado.\n");
		else if (media <= 4.9)printf("Aluno reprovado.\n");
		printf("Media final: %.1f\n", media);
	}
	return 0;
}
