#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int buscarNumero(int matriz[], int linhas, int colunas, int v){
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            if(matriz[i * colunas + j] == v){
                return 1;
            }
        }
    }
    return 0;
}

int main(){

    int m, n, *mat = NULL, valor, result;
    char answer;

    scanf("%d %d", &m, &n);
    fflush(stdin);

    mat = (int *)malloc(m*n*sizeof(int));

    if(mat == NULL){
        printf("\nMemoria insuficiente!!\n\n");
        exit(1);
    }

    printf("\nGostaria de informar os valores para a matriz ? \n\nDigite (s / S) ou (n / N)..\n\n");
    scanf("%c", &answer);

    if(answer == 's' || answer == 'S'){
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                scanf("%d", &mat[i * n + j]);
            }
        }
        printf("\nInforme o numero que deseja encontrar na matriz : ");
        scanf("%d", &valor);

        result = buscarNumero(mat, m, n, valor);

        if(result == 1){
            printf("\nValor encontrado na matriz..\n\n");
        } else {
            printf("\nValor nao encontrado na matriz..\n\n");
        }
    } else if(answer == 'n' || answer == 'N'){
        srand(time(NULL));

       for(int i=0; i<m; i++){ //gerando valores aleatorios para a matriz
        for(int j=0; j<n; j++){
            mat[i * n + j] = rand() % 10;
        }
       }

        printf("\nInforme o numero que deseja encontrar na matriz : ");
        scanf("%d", &valor);

        result = buscarNumero(mat, m, n, valor);

        if(result == 1){
            printf("\nValor encontrado na matriz..\n\n");
        } else {
            printf("\nValor nao encontrado na matriz..\n\n");
        }
    }

    free(mat);

    return 0;
}
