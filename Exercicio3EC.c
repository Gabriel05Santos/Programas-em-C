#include <stdio.h>
   
   int main(){
   
   int num1, num2;
   
       printf("Digite um numero: ");
       scanf("%d", &num1);
       
       printf("Digite outro numero: ");
       scanf("%d", &num2);
   
   if(num1 > num2) {
       printf("O maior numero eh: %d\n",num1);
   }  else if(num1 < num2) {
       printf("O maior numero eh: %d\n",num2);
   } else {
       printf("Os dois numeros sao iguais: %d\n", num1); 
   }
   
  return 0;
}