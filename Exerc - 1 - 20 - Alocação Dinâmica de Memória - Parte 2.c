
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *mat1, *mat2, linhas=3, colunas=3, *mat3, valor;

    mat1 = (int *)malloc(linhas*colunas*sizeof(int));
    mat2 = (int *)malloc(linhas*colunas*sizeof(int));
    mat3 = (int *)malloc(linhas*colunas*sizeof(int));

    if(mat1 == NULL){
        printf("\nMemoria insuficiente\n");
        exit(1);
    }
    if(mat2 == NULL){
        printf("\nMemoria insuficiente\n");
        exit(1);
    }
    if(mat3 == NULL){
        printf("\nMemoria insuficiente\n");
        exit(1);
    }
    printf("\nInserindo valores para a MATRIZ 1..\n");
     for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            scanf("%d", &mat1[i*colunas+j]);
        }
    }

    printf("\nInserindo valores para a MATRIZ 2..\n");
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            scanf("%d", &mat2[i*colunas+j]);
        }
    }

    printf("\nCalculando produto das MATRIZES..\n");
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
                mat3[i*colunas+j] = 0;
            for(int k=0; k<colunas; k++){
                mat3[i*colunas+j] += mat1[i*colunas+k]*mat2[k*colunas+j];
            }
        }
    }

    printf("\nImprimindo a MATRIZ 3..\n\n");
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf(" %d", mat3[i*colunas+j]);
        }
        printf("\n");
    }
	free(mat1);
	free(mat2);
	free(mat3);
    return 0;
}
