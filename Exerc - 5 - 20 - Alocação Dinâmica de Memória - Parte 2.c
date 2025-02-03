#include <stdlib.h>
#include <stdio.h>

int main(){

    int n, m, **mat = NULL, maior = 0, linha = 0, coluna = 0;

    scanf("%d %d", &n, &m);

    mat = (int **)malloc(n*sizeof(int *));

    if(mat == NULL){
        printf("\nMemoria insuficiente!!\n\n");
        exit(1);
    }

    for(int i=0; i<n; i++){
        mat[i] = (int *)malloc(m*sizeof(int));
        if(mat[i] == NULL){
            printf("\nMemoria insuficiente!!\n");
            exit(1);
        }
    }

    printf("\nInforme os valores para a matriz..\n\n");

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i=0; i<n; i++){ //imprimindo a matriz para conferir o resultado
        for(int j=0; j<m; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[i][j] > maior){
                maior = mat[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    printf("\nMaior valor encontrado : %d", maior);
    printf("\nLinha : %d\nColuna : %d\n\n", linha, coluna);

    for(int i=0; i<n; i++){
        free(mat[i]);
    }

    free(mat);

    return 0;
}
