#include <stdlib.h>
#include <stdio.h>
void preencherArray(int *array[], int n){
 int *i, p;

     i = &p;

     for(p; p < n; p++){
         *(array + p) = n;
     }

    for(p = 0; p < n; p++){
        printf("%d ", *(array + p));
    }
}
int main(){
    int valor, array[valor];

    scanf("%d", &valor);

    preencherArray(array, valor);

return 0;
}


