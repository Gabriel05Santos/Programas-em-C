#include <stdio.h>
#include <stdlib.h>
    
    int main() {
   
    int tipo;

    do {
  
    printf("Menu de opcoes:\n");
    printf("----------------------\n");
    printf("1. Media aritmetica\n");
    printf("----------------------\n");
    printf("2. Media ponderada\n");
    printf("----------------------\n");
    printf("3. Sair\n");
    printf("----------------------\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &tipo);

    switch (tipo) {
        case 1: {
    float nota1, nota2, media_aritmetica;
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
  
    media_aritmetica = (nota1 + nota2) / 2;
  
    printf("A media aritmetica eh: %.2f\n", media_aritmetica);
    break;
    }
        case 2: {
   
     float nota1, nota2, nota3, peso1, peso2, peso3, media_ponderada;
   
         printf("Digite a primeira nota: ");
         scanf("%f", &nota1);
         printf("Digite o peso da primeira nota: ");
         scanf("%f", &peso1);
         printf("Digite a segunda nota: ");
         scanf("%f", &nota2);
         printf("Digite o peso da segunda nota: ");
         scanf("%f", &peso2);
         printf("Digite a terceira nota: ");
         scanf("%f", &nota3);
         printf("Digite o peso da terceira nota: ");
         scanf("%f", &peso3);
    
     media_ponderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

    printf("A media ponderada eh: %.2f\n", media_ponderada);
    break;
            }
        case 3:
     printf("Sair do programa.\n");
     break;
    
     default:
     printf("Opcao invalida!\n");
    
     break;
   }
   } while (tipo != 3);

    return 0;
}
