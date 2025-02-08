#include <stdio.h>
#include <stdlib.h>

    int main() {
 
    int quantidade,idade, soma_idade = 0, contador = 0;
    float media;
   
    printf("Digite a quantidade de idades que serao dadas:\n");
    scanf("%d", &quantidade);
   
    printf("Digite as idades:\n");
   
    for(int i = 0; i < quantidade; i++) {
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