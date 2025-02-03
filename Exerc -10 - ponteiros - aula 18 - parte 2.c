#include <stdio.h>
#include <stdlib.h>
int somarArrays(int *array1, int *array2, int tam1, int tam2, int **array3){

    if(tam1 != tam2){
        return 0;
    }

    *array3 = (int *)malloc(tam1 * sizeof(int));

    if (*array3 == NULL) {
        printf("Erro ao alocar memória para o terceiro array!!\n");
        exit(1);
     }

    for(int i = 0; i < tam1; i++){
        *(*array3 + i) = *(array1 + i) + *(array2 + i);
    }
    return 1;
}

int main(){

    int *arr1 = NULL, valor, valor2, tamanho1 = 0, tamanho2 = 0, *arr2 = NULL, *arr3 = NULL;


    while(1){//digitando os valores para o PRIMEIRO array
        scanf("%d", &valor);
        if(valor < 0){
            break;
        }
        arr1 = realloc(arr1, (tamanho1 + 1) * sizeof(int));
        if(arr1 == NULL){
            printf("Erro ao alocar memoria!!\n");
            return 1;
        }

        arr1[tamanho1] = valor;
        tamanho1++;
    }
     printf("\n");
      while(1){//digitando os valores para o SEGUNDO array
        scanf("%d", &valor2);
        if(valor2 < 0){
            break;
        }
        arr2= realloc(arr2, (tamanho2 + 1) * sizeof(int));
        if(arr2 == NULL){
            printf("Erro ao alocar memoria!!\n");
            return 1;
        }

        arr2[tamanho2] = valor2;
        tamanho2++;
    }

    int result = somarArrays(arr1, arr2, tamanho1, tamanho2, &arr3);

    if(result == 0){
        printf("Nao foi possivel somar os arrays pois, ambos sao de tamanhos diferentes!!\n");
    } else {
        printf("\n");
        for(int i = 0; i < tamanho1; i++){
            printf("%d\n", *(arr3 + i));
        }
    }

    free(arr1);
    free(arr2);//liberando as memorias alocadas
    free(arr3);

    return 0;
}
