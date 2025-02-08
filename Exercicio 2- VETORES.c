#include <stdio.h>
#include <stdlib.h>

    int main() {
    
    char* mes[12] = {
        "janeiro", "fevereiro", "março", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
    int mes_temp_maior, mes_temp_menor;
    float  maior_temperatura, menor_temperatura, temperaturas[12];
       
       printf("Informe a temperatura media de cada mes:\n");
  for(int i = 0; i < 12; i++){
       scanf("%f", &temperaturas[i]);
  } 
         maior_temperatura = menor_temperatura = temperaturas[0];
         mes_temp_maior = mes_temp_menor = 0;
 
  for(int i = 1; i < 12; i++){
   if(temperaturas[i] > maior_temperatura){
        maior_temperatura = temperaturas[i];
        mes_temp_maior = i;
   }
   if(temperaturas[i] < menor_temperatura){
        menor_temperatura = temperaturas[i];
        mes_temp_menor = i;
   }
   }
        printf("Maior temperatura: %.2f°C do mes de: %s!\n",maior_temperatura, mes [mes_temp_maior]);
        printf("Menor temperatura: %.2f°C do mes de : %s!\n",menor_temperatura, mes[mes_temp_menor]);
 
    return 0;
}