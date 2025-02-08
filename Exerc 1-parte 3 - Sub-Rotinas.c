#include <stdio.h>

void trocar_numeros(int *a , int *b){
	
	int aux = *a;
	*a = *b;
	*b = aux;
}
int main(){
	
	int a,b;
	
	printf("Digite dois numeros: \n");
	scanf("%d %d", &a, &b);
	
	trocar_numeros(&a, &b);
	
	printf("Numeros com os valores trocados:\n A = %d\n B = %d\n", a, b);
	
	return 0;
}
