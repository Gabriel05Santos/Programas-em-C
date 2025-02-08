#include <stdio.h>
   
   int main() {
   
   float salario, novo_salario, aumento;
   
   printf("Digite seu salario:\n");
   scanf("%f", &salario);
   
   if(salario <= 499.99){
      aumento = salario*0.15;
      novo_salario = salario + aumento;
      printf("Seu novo salario eh: %.2f\n", novo_salario);
   } else if(salario >= 500.00 && salario <= 1499.99){
       aumento = salario*0.10;
       novo_salario = salario + aumento;
       printf("Seu novo salario eh: %.2f\n", novo_salario);
   } else if(salario >= 1500.00 && salario <= 2499.99){
       aumento = salario*0.05;
       novo_salario = salario + aumento;
       printf("Seu novo salario eh: %.2f\n", novo_salario);
   } else if(salario >= 2500.00){
       printf("Sem direito a aumento!\n");
   }
   
       
  return 0;
  }