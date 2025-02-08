#include <stdio.h>

int maior_Menor(int num1, int num2){
    
	if(num1 >= 0){
    	if(num1 > num2) return num1;
    	else return num2;
	} else {
    	if(num2 >= 0){
     	if(num2 >= num1) return num2;
     	else return num1;
    	} else {
        	if(num2 >= num1) return num2;
        	else return num1;
    	}
   }
}
int main (){
	int num1, num2;
    int valor_calcular;

	printf("Digite um numero: \n");
	scanf("%d", &num1);
	printf("Digite outro numero: \n");
	scanf("%d", &num2);

	valor_calcular = maior_Menor(num1, num2);
    printf("Maior numero eh: %d", valor_calcular);

	return 0;
}
