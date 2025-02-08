#include <stdio.h>
#include <stdlib.h>

    int main() {
 
    int num;
   
    printf("Digite um número:\n");
    scanf("%d", &num);
    for(int i = 1; i <= 10; i++){
    
    printf("Tabuada do : %d\n%d X %d = %d\n",num ,num, i, num*i);
    }
    return 0;
}