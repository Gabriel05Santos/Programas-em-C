#include <stdio.h>

char* tipoTriangulo(float X, float Y, float Z){
    
    if(X + Y <= Z || Y + Z <= X || Z + X <= Y){
        return "Os valores nao podem formar um triangulo!!";
    } 
    if(X <= 0 || Y <= 0 || Z <= 0){
        return "Os valores nao podem formar um triangulo!!";
    }
    
    if(X == Y && Y == Z ){
         return "Triangulo Equilatero: os comprimentos dos 3 lados sao iguais.";
    }
    if(X == Y || Y == Z || Z == X){
        return "Triangulo Isosceles: os comprimentos de 2 lados sao iguais.";
    } else {
        return "Triangulo Escaleno: os comprimentos dos 3 lados sao diferentes.";
    }
}
int main (){
    float X, Y, Z;
    char* tipo;

    printf("Informe tres valores: \n");
    scanf("%f %f %f", &X, &Y, &Z);
    
    tipo = tipoTriangulo(X, Y, Z);
    
    printf("%s\n", tipo);
   
    return 0;
}