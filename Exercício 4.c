#include <stdio.h>
   
   int main(){
   
   float salario, aumento, percentual;
   
   printf("Digite seu salario:\n");
   scanf("%f", &salario);
   
   printf("Digite o percentual de aumento:\n");
   scanf("%f", &percentual);
   
   printf("Seu aumento eh de: %2f + %2f\n",salario, percentual);
   
   aumento = salario + (salario*percentual) / 100;
   
   printf("Seu novo salario eh: %3f\n",aumento);


    return 0;
}