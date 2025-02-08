#include <stdio.h>
   
   int main(){
   
   float N1, N2, N3, N4, media;
   
   printf("Digite as quatro notas: ");
   scanf("%f" "%f" "%f" "%f", &N1, &N2, &N3, &N4);
   
   media = (N1 + N2 + N3 + N4) / 4 ;
   
   if(media >= 7.0) {
   printf("Aprovado: %.2f\n", media);
   }  else {
   printf("Aluno reprovado: %.2f\n", media);
   }
   
  return 0;
}