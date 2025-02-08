#include <stdio.h>
#include <stdlib.h>

    int main (){
    
    int matrizB[2] [2];
    int matrizA [2] [2];
    int maior_numero = 0, i,j;

    printf("Digite 4 valores !\n");

    for(int i = 0; i < 2; i++){

    for(int j = 0; j < 2; j++){
    scanf("%d", &matrizA[i] [j]);
   
    if(maior_numero < matrizA[i] [j]){
      
       
       maior_numero = matrizA[i] [j];
    }
    }
    }
      for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2 ; j++){
    
        matrizB[i] [j] = maior_numero * matrizA [i][j];
    
    }     
    }
    printf("\n");

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2 ; j++)
            printf("%d ", matrizB [i] [j]);
            printf("\n");
    }    

    return 0;
}