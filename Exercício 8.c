#include <stdio.h>
   
   int main(){
   
   float salario, imposto, gratif, novo_salario;
   
   printf("Digite o salário base:\n");
   scanf("%f", & salario);
   
   imposto = (salario * 10) /100;
   
   gratif = 50.0;
   
   novo_salario = salario - imposto + gratif;
   
   printf("Seu novo salário eh: %2f\n", novo_salario);
   
  
    return 0;
}