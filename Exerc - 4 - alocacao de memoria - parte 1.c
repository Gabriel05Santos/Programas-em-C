#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void freeMemory(int *array){

    free(array);
    printf("\nMemoria liberada com sucesso!!\n");
}

void printingVector(int *arr, int tam){

    for(int i=0; i<tam; i++){
      printf("%d\n", arr[i]);
    }
}

int getN(int n){

    int *array = (int *)malloc(n * sizeof(int));

    if(array == NULL){
        printf("Erro allocating memory!!\n");
        exit(1);
    }

    for(int i=0; i<n; i++){
       array[i] = rand() % 10;
    }

    return array;
}

int main(){
    int n, *array = NULL;

    srand(time(NULL));

    scanf("%d", &n);

    array = getN(n);//funcao que recebe um valor n e retorna um ponteiro

    printingVector(array, n);//funcao para imprimir os elementos

    freeMemory(array);//funcao para liberar a memoria alocada

    return 0;
}
