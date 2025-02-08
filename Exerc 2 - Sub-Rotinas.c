#include <stdio.h>

float calcularMaiorNota(float X, float Y, float Z){
   float menor, media_2;

    if(X < Y && X < Z){
        menor = X;
        if(Y < Z)printf("A maior nota eh: %.1f e a menor nota eh: %.1f\n", Z, X);
        else printf("A maior nota eh: %.1f e a manor nota eh: %.1f\n", Y, X);
    } else if(Y < X && Y < Z){
        menor = Y;
        if(X < Z)printf("A maior nota eh: %.1f e a menor nota eh: %.1f\n", Z, Y);
        else printf("A maior nota eh: %.1f e a menor nota eh: %.1f\n", X, Y);
    } else {
        menor = Z;
        if(X < Y)printf("A maior nota eh: %.1f e a menor nota eh: %.1f\n", Y, Z);
        else printf("A maior nota eh: %.1f e a menor nota eh: %.1f\n", X, Z);
    }
    media_2 = (X + Y + Z - menor)/2.0;

    return media_2;
}

float calcularMedia(float X, float Y, float Z){
 	float media_3notas;

    return media_3notas = (X + Y + Z)/3;
}

int main (){
	float X, Y, Z;
    float valor_media_2, valor_media_3;
	
	printf("Informe as tres notas: \n");
	scanf("%f %f %f", &X, &Y, &Z);
	
    calcularMedia(X, Y, Z);
    valor_media_2 = calcularMaiorNota(X, Y, Z);
    valor_media_3 = calcularMedia(X, Y, Z);

    printf("Media com as duas maiores notas: %.1f\n", valor_media_2);
    printf("Media com as tres notas: %.1f\n", valor_media_3);
   
	return 0;
}
