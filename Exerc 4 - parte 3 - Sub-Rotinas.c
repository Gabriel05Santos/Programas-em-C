#include <stdio.h>
#include <math.h>

void calcular_raizes(double a, double b, double c, double *raiz_x1, double *raiz_x2, int *raizes){
    double delta; 
    
    delta = (b * b) - 4 * a * c;

    if(delta > 0){
        *raizes = 2;
        *raiz_x1 = (-b + sqrt(delta)) / (2 * a);
        *raiz_x2 = (-b - sqrt(delta)) / (2 * a); 
    }else if (delta == 0) {
        *raiz_x1 = *raiz_x2 = -b / (2 * a);
        *raizes = 1;
    } else {
        *raizes = 0;
    }
}

int main(){
    double a, b, c, x1, x2;
    int Tem_raizes;

    printf("Digite tres valores: \n");
    printf("A = ");
    scanf("%lf", &a);
    printf("B = ");
    scanf("%lf", &b);
    printf("C = ");
    scanf("%lf", &c);

    if(a == 0){
        printf("Digite um valor diferente de ZERO ( 0 ) para a variavel ( a )");
    } else {
     calcular_raizes(a, b, c,  &x1, &x2, &Tem_raizes);
     
     if(Tem_raizes == 2){
          printf("Raizes da equacao do 2 grau:\n");
          printf("X1 = %.2lf\nX2 = %.2lf\n", x1, x2);
        } else if(Tem_raizes == 1){
          printf("A equacao possui raiz dupla: \nX1 = X2 = %.f", x1);
        } else {
          printf("Nao existem raizes reais!!");
     }
    }

    return 0;
}