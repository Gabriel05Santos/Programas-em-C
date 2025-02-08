#include <stdio.h>
   
   int main(){
   
   int nascimento, anoatual, idade;
   int a2050;
   
   printf("Digite seu ano de nascimento:\n");
   scanf("%d", &nascimento);
   
   printf("Digite o ano atual:\n");
   scanf("%d", &anoatual);
   
   idade = anoatual - nascimento;
   
   printf("Sua idade eh: %d anos\n", idade);
   
   a2050 = 2050 - nascimento;
   
   printf("E sua idade em 2050 eh: %d anos\n", a2050);


    return 0;
}