#include <stdio.h>
#include <stdlib.h>

    int main() {
 
    int num[9];
    
   for(int i = 0; i < 9; i++){
       scanf("%d", &num[i]);
  } 
  for(int i = 0; i < 9; i++){
   if(num[i] % 2 == 0){
    printf("Número par: %d e sua posicao: %d\n",num[i],i);
   }
 }
    return 0;
}