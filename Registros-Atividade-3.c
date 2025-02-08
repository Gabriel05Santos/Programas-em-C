#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 struct carro {
    char marca;
    int year;
    float valor;
};
    
int main (){
    
    char marca[15];
    int year = 0, i;
    double valor = 0, p = 0;
    struct carro Car[5];
    
    do {
    printf("Digite um valor: \n");
    scanf("%lf", &p);
    fflush(stdin);
     if(p == 0){
      break;
     }
   } while (p != 0);
   
     printf("\n");
     
    for(int i = 0; i < 5; i++){
    printf("Digite a marca do %d° carro : \n",i+1);
    scanf(" %s", &Car[i].marca);
    fflush(stdin);
    printf("\n");
    
    printf("Informe o ano do carro: \n");
    scanf("%d", &Car[i].year);
    fflush(stdin);
    printf("\n");
    
    printf("Informe o preço do veículo: \n");
    scanf("%lf", &Car[i].valor);
    fflush(stdin);
    printf("\n");
   }
   if(Car[i].valor < p){
     printf("Marca do veículo: %s\n",Car[i].marca);
     printf("Preço do veículo: %.2lf\n",Car[i].valor);
     printf("Ano do veículo: %d\n",Car[i].year);
    } else {
    printf("Nenhum carro com preço menor que (p)!");
    }
   return 0;
}