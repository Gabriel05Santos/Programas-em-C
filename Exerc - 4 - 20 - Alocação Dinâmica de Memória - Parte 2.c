#include <stdlib.h>
#include <stdio.h>

int main(){

    int n, m, *mat = NULL, maior = 0, linha, coluna;

    scanf("%d %d", &n, &m);

    mat = (int *)malloc(n*m*sizeof(int));

    if(mat == NULL){
        printf("\nMemoria insuficiente!!\n\n");
        exit(1);
    }

    printf("\nInforme os valores para a matriz..\n\n");

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &mat[i * m + j]);
        }
    }

    for(int i=0; i<n; i++){ //imprimindo a matriz para conferir o resultado
        for(int j=0; j<m; j++){
            printf("%d ", mat[i*m+j]);
        }
        printf("\n");
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[i * m + j] > maior){
                maior = mat[i * m + j];
                linha = i;
                coluna = j;
            } else {
                mat[i * m + j] = i++;
            }
        }
    }

    printf("\nMaior valor encontrado : %d", maior);
    printf("\nLinha : %d\nColuna : %d\n\n", linha, coluna);
    free(mat);

    return 0;
}
