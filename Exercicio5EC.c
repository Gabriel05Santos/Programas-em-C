#include <stdio.h>
   
   int main(){
   
   float salario, aumento;
   
       printf("Digite o seu salario: ");
       scanf("%f", &salario);
   
   if(salario <= 500.0) {
       printf("Seu novo salario eh: %.2f\n", salario + (salario*0.30) / 100);
   }  else if(salario > 500.0) {
       printf("Sem direito a aumento: %.2f\n", salario);
   }
   
  return 0;
}