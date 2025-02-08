#include <stdio.h>
   
   int main(){
   
   float grausC, grausF;
   
   printf("Digite a temperatura:\n");
   scanf("%f", &grausC);
   
   grausF = (1.8*grausC) + 32;
   
   printf("A temperatura em Fahrenheit: F° %2f\n", grausF);
  
    return 0;
}