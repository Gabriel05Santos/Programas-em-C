#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int verificarNumero(int v[], int num){
    
    for(int i = 0; i < 10; i++){
        if(v[i] == num){
            return 1;
        } 
    }
        return 0;
}

int main(){
    int vetor[10], numero, TemNumero;
    
    srand(time(NULL));

    for(int i = 0; i < 10; i++){
     vetor[i] = rand() % 10;  
    }
    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &numero);

    TemNumero = verificarNumero(vetor, numero);

    if(TemNumero == 1){
        printf("O numero digitado pelo usuario esta presente no vetor!!\n");
    } else {
        printf("O numero digitado pelo usuario nao esta presente no vetor!!\n");
    }

	return 0;
}
