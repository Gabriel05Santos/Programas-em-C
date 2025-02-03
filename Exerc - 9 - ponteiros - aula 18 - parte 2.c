#include <stdlib.h>
#include <stdio.h>
int quant;
int maior;

void calcularArray(int array[], int tam){
    maior = array[0];
    quant = 1;

    for(int i = 1; i < tam; i++){
        if(array[i] > maior){
            maior = array[i];
            quant = 1;
        } else if(array[i] == maior){
            quant++;
        }
    }
}
int main(){
    int tamanho = 0, valor, *array = NULL;

    while(1){
        scanf("%d", &valor);
        if(valor < 0){
            break;
        }
        array = realloc(array, (tamanho + 1) * sizeof(int));
        if(array == NULL){
            printf("Erro ao alocar memoria!!\n");
            return 1;
        }

        array[tamanho] = valor;
        tamanho++;
    }
    calcularArray(array, tamanho);

    printf("\nMaior elemento: %d\nNumero de vezes que se repete: %d\n", maior, quant);

    free(array);

    return 0;
}



