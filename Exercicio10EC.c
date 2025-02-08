#include <stdio.h>
   
   int main() {
   
   int  H, horas_extras, horas_faltas;
  // float H;//
   
   printf("Informe a quantidade de horas extras: ");
   scanf("%d", &horas_extras);
   
   printf("Informe a quantidade de horas faltadas: ");
   scanf("%d", &horas_faltas);
   
   H = horas_extras - (2*(horas_faltas / 2));
  
   if(H > 2400){
       printf("O valor do seu prêmio eh: $ 500.00");
   } else if(H > 1800 && H <= 2400){
       printf("O valor do seu prêmio eh: $ 400.00");
   } else if(H >= 1200 && H <= 1800){
       printf("O valor do seu prêmio eh: $ 300.00");
   } else if(H >= 600 && H <= 1200){
       printf("O valor do seu prêmio eh: $ 100.00");
  }
   return 0;
  }