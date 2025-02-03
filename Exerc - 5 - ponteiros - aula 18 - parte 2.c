#include <stdio.h>
#include <stdlib.h>

int main(){
     int A, *B = &A, **C = &B, ***D = &C;

     scanf("%d", B);

     printf("DOBRO: %d\n", (*B) * 2);
     printf("TRIPLO: %d\n", (**C) * 3);
     printf("QUADRUPLO: %d\n", (***D)  * 4);

    return 0;
}
