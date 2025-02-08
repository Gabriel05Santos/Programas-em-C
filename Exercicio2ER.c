#include <stdio.h>
#include <stdlib.h>

    int main() {
   
    int num[10];
    int i;
    
    for(i = 0;i < 10;i++) {
    scanf("%d", &num[i]);
    }for(i = 0;i < 10;i++) {
    printf("%d\n", num[i]);
    }
    printf("\n");
    return 0;
}