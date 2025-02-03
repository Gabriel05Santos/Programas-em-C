
#include <stdlib.h>
#include <stdio.h>
void medidas_retangulo(double*var1,double*var2){
 double aux1, aux2;
    aux1 = *var1 * *var2;
    aux2 = 2 * (*var1 + *var2);
    *var1 = aux1;
    *var2 = aux2;
}
int main(){
double *var1, v1, *var2, v2;
  var1 = &v1;
  var2 = &v2;
   scanf("%lf %lf", &*var1, &*var2);
   medidas_retangulo(&v1, &v2);
   printf("\nArea: %.2f\nPerimetro: %.2f\n", v1, v2);
return 0;
}
