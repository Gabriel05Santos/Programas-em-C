#include <stdio.h>
   
   int main() {
   
   float valor_investido, valor_corrigido;
   int codigo;
   
   printf("Digite o valor a ser investido:");
   scanf("%f", &valor_investido);
   
   printf("Digite o codigo correspondente ao tipo de investimento:");
   scanf("%d", &codigo);
   
   switch(codigo){
       case 1:
       valor_corrigido = valor_investido*0.05;
       printf("Seu novo valor de investimento eu: %.2f\n", valor_corrigido);
    break;  
       case 2:
       valor_corrigido = valor_investido*1.1;
       printf("Seu novo valor de investimento eh: %.2f\n", valor_corrigido);
    break;
   }
  return 0;
  }