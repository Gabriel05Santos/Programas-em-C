#include <stdio.h>
#include <stdlib.h>

    int main (){
    
    int matrizB [3] [4];
    int matrizA [3] [4];
    
    printf("Digite 12 valores !\n");

    for(int i = 0; i < 3; i++){
    for(int j = 0; j < 4; j++){
 
    scanf("%d", &matrizA[i] [j]);
    }
    }
    printf("\n");
  
    for(int i = 0; i < 3; i++){
    for(int j = 0; j < 4; j++){
       
       if(matrizA[i] [j] % 2 == 0){
        matrizA [i] [j] = matrizA[i] [j] * 2;   
    }  
       if(matrizA[i] [j] % 2 == 1){
        matrizA [i] [j] = matrizA [i] [j] * 3;   
   
    }          
            matrizB [i][j] = matrizA [i][j];
    }
    }        
    printf("\n");
    
    for(int i = 0; i < 3; i++){
    for(int j = 0; j < 4 ; j++)
            printf("%d ", matrizB [i] [j]);
            printf("\n");
    }
    return 0;
}