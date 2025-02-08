#include <stdio.h>

    int main() {
 
    int idade, soma_idade = 0, contador = 0;
    float media;
   
    while(1) {
     printf("Digite uma idade ou 0 para finalizar o programa:\n");
     scanf("%d",&idade);
    if(idade == 0){
        break;
    }
    soma_idade += idade;
    contador++;
    }
     if(contador == 0){
    printf("Nenhuma idade informada!\n");
    } else {
    media = (float)soma_idade / contador;
    printf("A media das idades eh:%.2f\n", media); 
    }
    
    return 0;
}