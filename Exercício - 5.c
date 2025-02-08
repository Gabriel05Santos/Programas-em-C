#include <stdio.h> 
    int main(){
    
    int anoatual, anonasc, idade, idade2050;
    
    printf("Digite o ano em que nasceu: ");
    scanf("%d", &anonasc);
    
    printf("Digite o ano atual: ");
    scanf("%d", &anoatual);
    
    idade = anoatual - anonasc;
    printf("Sua idade atual eh: %d anos\n", idade);
    
    idade2050 = 2050 - anonasc;
    printf("Sua idade em 2050 eh: %d anos\n", idade2050);
    
    
    
    
    return 0; 
    
    }