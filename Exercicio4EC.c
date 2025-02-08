#include <stdio.h>
   
   int main() {
   
   float num1, num2, result;
   int codigo;
   
       printf("Digite um numero: ");
       scanf("%f", &num1);
       
       printf("Digite outro numero: ");
       scanf("%f", &num2);
       
       printf("Digite o numero correspondente ao codigo da operacao: ");
       scanf("%d", &codigo);
    switch (codigo) {
        case 1:
        result = (num1 + num2) / 2;
        printf("A media dos numeros eh: %.2f\n", result);
    break;
        case 2: 
   if(num1 >= num2) {
       result = num1 - num2;
    } else {
        result = num2 - num1;
    }
       printf("A diferenca entre o maior e o menor numero eh: %.2f\n",result);
    break;
        case 3:
        result = num1 * num2;
        printf("O produto dos numeros eh: %.2f\n", result);
    break;
        case 4:
        if(num2 !=0){
        result = num1 / num2;
        printf("O resultado da divisao entre os numeros eh: %.2f\n", result);
    } else {
        printf("A divisão por zero não eh permitido.\n");
    }
    break;    
        default:
        printf("Código digitado invalido.\n");
    break;    
  }   
  return 0;
  }