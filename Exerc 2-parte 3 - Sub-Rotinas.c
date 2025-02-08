
#include <stdio.h>

void somar_subtrair(int *a , int *b){
	(*a)--;
	(*b)++;
}
int main(){
	int a, b;
	
	printf("Digite dois numeros: \n");
	scanf("%d %d", &a, &b);
	
	somar_subtrair(&a, &b);

	printf("VALOR DE A: %d\nVALOR DE B: %d\n", a, b);
	
	return 0;
}