#include <stdio.h>
#include <stdlib.h>
#define tamanho 10

void preencher_vetor(int v[]){
    int num;
    srand(time(NULL));

    for(int i = 0; i < tamanho; i++){
        v[i] = rand()%10;
    }
}

int buscar_numero(int v[tamanho], int number){

    for(int i = 0; i < tamanho; i++){
     if(v[i] == number){
        return 1;
      }
    }
    return 0;
}

int main(){
    int vet[tamanho], resultado, num, v;

    preencher_vetor(vet);

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &num);

    printf("\n");
    buscar_numero(vet, num);
    resultado = buscar_numero(vet, num);

    if(resultado == 1){
        printf("O NUMERO DIGITADO ESTA PRESENTE NO VETOR!!");
        printf("\n");
    } else {
        printf("O NUMERO DIGITADO NAO ESTA PRESENTE NO VETOR!!");
        printf("\n");
    }
    return 0;
}
