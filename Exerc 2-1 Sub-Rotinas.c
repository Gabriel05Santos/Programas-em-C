#include <stdio.h>
#include <math.h>

float raiz_quadrada(int num){
	
	if (num < 0){ 
		return -1;
	} else { 
		return sqrt(num);	
	}
}

int main (){
	int num;
	float resultado;

	printf("Digite um numero: \n");
	scanf("%d", &num);
	
	resultado = raiz_quadrada(num);

	if(resultado == -1){
		printf("Nao existe raiz quadrada negativa!!\n");
	} else {
		printf("A raiz quadrada do numero %d eh %.1f\n", num, resultado);
	}
	return 0;
}