#include <stdio.h>
   
   int main(){
   
   float N1, N2, media;
   
   printf("Digite as duas notas: ");
   scanf("%f" "%f", &N1, &N2);
   
   media = (N1 + N2) / 2.0;
   
   if(media >= 7.0) {
       printf("Aprovado: %.2f\n", media);
   }  else if(media >= 0.0 && media <= 3.9) {
       printf("Aluno reprovado: %.2f\n", media);
   } else if(media >= 4.0 && media <= 6.9){
       printf("Exame: %.2f\n", media);
   }
   
  return 0;
}