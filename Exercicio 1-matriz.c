#include <stdio.h>
#include <stdlib.h>

    int main (){

    int matriz[3] [3];
    int valores = 0;

    printf("Digite 9 valores !\n");

    for(int i = 0; i < 3; i++){

    for(int j = 0; j < 3 ;j++){
    scanf("%d", &matriz[i] [j]);

    }
    }

    printf("\n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3 ; j++)
            printf("%d ", matriz [i] [j]);
            printf("\n");
    }    

    return 0;
}