#include <stdio.h>
#include <stdlib.h>

    int main() {
 
    int num[10], somapar = 0, produtoimpar = 1;
  
    printf("Digite dez numeros:\n");
    
    for(int i = 0; i < 10; i++){
       scanf("%d",&num[i]);
    
    if(num[i] % 2 == 0){
    somapar += num[i];
    } else {
     produtoimpar*=num[i];
    }
   }
    printf("A soma dos pares eh:%d\n", somapar);
    printf("Produto dos impares eh:%d\n", produtoimpar);
    return 0;
}