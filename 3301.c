#include <stdio.h>

int main(){
	
	int H, Z, L;
	
	scanf("%d", &H);
	scanf("%d", &Z);
	scanf("%d", &L);
	
	if (H < Z & H > L)
	{
		printf("huguinho");
	}
		if (H > Z & H < L)
	{
		printf("huguinho");
	}
	if (Z < H & Z > L)
	{
	
		printf("zezinho");
	}
	if (Z > H & Z < L)
	{
	
		printf("zezinho");
	}
	if (L < H & L > Z)
	{
		printf("luisinho");
	}
	if (L > H & L < Z)
	{
		printf("luisinho");
	}
	
	
	return 0;
}
