#include <stdio.h>
#include <string.h>
int main(){
	
	char vert[20]="vertebrado";
	char inve[20]="invertebrado";
	char ave[20]="ave";
	char mami[20]="mamifero";
	char ins[20]="inseto";
	char aneli[20]="anelideo";
	char carn[20]="carnivoro";
	char oni[20]="onivoro";
	char herb[20]="herbivoro";
	char hema[20]="hematofago";
	char x[20],y[20],z[20];
	
	int comp;
	
	fgets(x,20,stdin);
	fgets(y,20,stdin);
	fgets(z,20,stdin);
	
	comp = strcmp(x,vert);

	if (comp == 1){
		comp = strcmp(y,ave);
		if (comp == 1){
			comp = strcmp(z,carn);
			if (comp == 1)printf("aguia");
			else{
				comp = strcmp(z,oni);
			    if (comp ==1)printf("pomba");
			}
		}
		else {
			comp = strcmp(z,oni);
			if (comp == 1)printf("homem");
			else{
				comp = strcmp(z,herb);
				if (comp == 1)printf("vaca");
			}
		}	
	}
	else{
		comp = strcmp(y,ins);
		if (comp == 0){
			comp = strcmp(z,hema);
			if (comp == 0)printf("pulga");
			
		}
		
	}
	
	
	
	
	
	
	
	
	return 0;
}
