
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *mat1 = NULL, *mat2 = NULL, linhas=3, colunas=3, **mat3 = NULL, valor;

    mat1 = (int *)malloc(linhas*colunas*sizeof(int));
    mat2 = (int *)malloc(linhas*colunas*sizeof(int));
    mat3 = (int **)malloc(linhas*sizeof(int*));

    if(mat1 == NULL || mat2 == NULL || mat3 == NULL){
        printf("\nMemoria insuficiente\n");
        exit(1);
    }

    printf("\nInserindo valores para a MATRIZ 1..\n");
     for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            scanf("%d", &mat1[i*colunas+j]);
        }
    }
    fflush(stdin);

    printf("\nInserindo valores para a MATRIZ 2..\n");
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            scanf("%d", &mat2[i*colunas+j]);
        }
    }

    for(int i=0; i<colunas; i++){ //alocacao das colunas para a MATRIZ 3
        mat3[i] = (int *)malloc(linhas*sizeof(int));
        if(mat3[i] == NULL){
            printf("\nMemoria insuficiente!!\n");
            exit(1);
        }
    }

    printf("\nCalculando produto das MATRIZES..\n");
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            mat3[i][j] = mat1[i*colunas+j]*mat2[i*colunas+j];
        }
    }

    printf("\nImprimindo a MATRIZ 3..\n\n");
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf(" %d", mat3[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<linhas; i++){ // desalocacao da MATRIZ 3
        free(mat3[i]);
    }

	free(mat1);
	free(mat2);
	free(mat3);

    return 0;
}

