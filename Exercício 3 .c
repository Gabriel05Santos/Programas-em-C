#include <stdio.h>
    int main() {

    float base, altura, area;

    printf("Digite a base do triangulo:\n");
    scanf("%f", &base);

    printf("Digite a altura do triangulo:\n");
    scanf("%f", &altura);

    area = (base*altura) / 2;

    printf("A area do triangulo eh: %2f\n",area);


    return 0;
}