#include <stdio.h>
#include <stdlib.h>

    int main() {
   
    int i;
    
    for(i = 1000;i <= 2000;i++){
        if(i % 7 == 0){
        printf("%d eh divisível por 7!\n", i);
       }
    }
    return 0;
}