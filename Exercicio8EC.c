#include <stdio.h>
   
   int main() {
   
   int idade;
   
   printf("Digite sua idade:");
   scanf("%d", &idade);
   
   if(idade < 5){
       printf("Sem categoria ainda!");
   } else if(idade >=5 && idade <=7){
       printf("Sua categoria eh: INFANTIL.");
   } else if(idade >= 8 && idade <=10){
       printf("Sua categoria eh: JUVENIL.");
   } else if(idade >= 11 && idade <= 15){
       printf("Sua categoria eh: ADOLESCENTE.");
   } else if(idade >= 16 && idade <=30){
       printf("Sua categoria eh: ADULTO");
   } else if(idade >= 30){
       printf("Sua categoria eh: SENIOR");
   }
  return 0;
  }