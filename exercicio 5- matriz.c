#include <stdio.h>
#include <stdlib.h>

    int main (){

    float vendedor_1[1][4];
    float vendedor_3[1][4];
    float vendedor_2[1][4];
    int i,j;
    float total_vendas1 = 0,total_vendas2 = 0,total_vendas3 = 0,total_vendas_semana[4],total_vendas_mes = 0;
      
    printf("Digite a venda semanal do vendedor 1:\n");
    for(int i = 0; i < 1; i++){
    for(int j = 0; j < 4; j++){
    scanf("%f", &vendedor_1[i] [j]);
    }
    }
    printf("Digite a venda semanal do vendedor 2:\n");
    for(int i = 0; i < 1; i++){
    for(int j = 0; j < 4 ;j++){
    scanf("%f", &vendedor_2[i] [j]);
    }
    }
    printf("Digite a venda semanal do vendedor 3:\n");
    for(int i = 0; i < 1; i++){
    for(int j = 4; j < 4 ; j++){
    scanf("%f", &vendedor_3[i] [j]);
    }
    }    
    for(int i = 0; i < 1; i++){
    for(int j = 0; j < 4 ; j++){
        total_vendas1 += vendedor_1[i] [j];
    }
    }    
    for(int i = 0; i < 1; i++){
    for(int j = 0; j < 4 ; j++){
        total_vendas2 += vendedor_2[i] [j];
    }
    }    
    for(int i = 0; i < 1; i++){
    for(int j = 0; j < 4 ; j++){
        total_vendas3 += vendedor_3[i] [j];
    }
    }    
    for(int i = 0; i < 1; i++){
    for(int j = 0; j < 4 ; j++){
        total_vendas_semana [j] = vendedor_1[i] [j] + vendedor_2[i] [j] + vendedor_3[i] [j];
    }
     i+1;
    }   
    total_vendas_mes = total_vendas1 + total_vendas2 + total_vendas3;
    printf("\n\n");
    printf("Total de vendas do vendedor 1: %.2f\n",total_vendas1);
    printf("Total de vendas do vendedor 2: %.2f\n",total_vendas2);
    printf("Total de vendas do vendedor 3: %.2f\n",total_vendas3);
    printf("Total de vendas do mess somando todos os vendedores: %.2f\n",total_vendas_mes);
    printf("Total de vendas de cada semana (todos os vendedores juntos): %.2f\n", total_vendas_semana);
    return 0;
}