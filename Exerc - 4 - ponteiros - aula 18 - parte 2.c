#include <stdio.h>
#include <stdlib.h>

void swap(int* f, int* g, int* h){
    int aux1;

    if(*f < *g && *f < *h){
        if(*h < *g){
            aux1 = (*g);
            *g = (*h);
            *h = aux1;
        }
        } else if(*f < *g && *f > *h){
            aux1 = (*h);
            *h = (*g);
            *g = (*f);
            *f = aux1;
        } else if(*f > *g && *f > *h){
            if(*g > *h){
                aux1 = (*f);
                *f = (*h);
                *h = aux1;
            }
        } else {
            aux1 = (*g);
            *g = (*f);
            *f = aux1;
        }
}
int main(){
    int x, y, z, *A = &x, *B = &y, *C = &z;

    scanf("%d %d %d", &*A, &*B, &*C);

    swap(&x, &y, &z);

    printf("\n%d\n" , x);
    printf("%d\n" , y);
    printf("%d\n" , z);

    return 0;
}
