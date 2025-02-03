#include <stdio.h>
#include <stdlib.h>

void calc_esfera(float R, float *area, float *volume){

     *area = 4 * 3.14 * (R * R);
     *volume = (4 * 3.14 * R * R * R) / 3;
}

int main(){
    float A, *area, V, *volume, raio;
    area = &A;
    volume = &V;

    printf("Informe o RAIO:\n");
    scanf("%f", &raio);

    calc_esfera(raio, &A, &V);

    printf("\nArea: %.2f\nVolume: %.2f\n", *area, *volume);


    return 0;
}
