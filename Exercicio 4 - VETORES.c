#include <stdio.h>
#include <stdlib.h>

    int main() {
    
    int num[6], quantid_impares = 0, quantid_pares = 0, pares[6], impares[6];
       
       printf("Informe seis numeros inteiros:\n");
  for(int i = 0; i < 6; i++){
       scanf("%d", &num[i]);
  }  
  
  for(int i = 1; i < 6; i++){
   if(num[i] % 2 == 0){
        pares[quantid_pares] = num[i];
        quantid_pares++;
   } else {
         impares[quantid_impares] = num[i];
         quantid_impares++;
   }
   }
  for(int i = 0; i < quantid_pares; i++) {
          printf("Numero par: %d\n",pares[i]);
  }
       printf("Quantidade de numeros pares: %d\n", quantid_pares);
  
  for(int i = 0; i < quantid_impares; i++){
          printf("Numero impar: %d\n", impares[i]);
  }   
       printf("Quantidade de numeros impares: %d\n", quantid_impares);
    return 0;
}