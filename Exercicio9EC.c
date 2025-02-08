#include <stdio.h>
   
   int main() {
   
   int quantidade, codigo;
   float preco_unitario, preco_total, desconto, preco_final;
   
   printf("Digite a quantidade comprada do produto: ");
   scanf("%d", &quantidade);
   
   printf("Digite o codigo do produto: ");
   scanf("%d", &codigo);
   
   if(codigo >= 1 && codigo <= 10){
       preco_unitario = 10.00;
   } else if(codigo >= 11 && codigo <= 20){
       preco_unitario = 15.00;    
   } else if(codigo >20 && codigo <= 30){
       preco_unitario = 20.00;
   } else if(codigo >30 && codigo <= 40){
       preco_unitario = 30.00;
   } else {
       printf("Código inválido!\n");
      return 1;
  } 
      preco_total = preco_unitario*quantidade;
      if(preco_total <= 250.00){
      desconto = preco_total*0.05;
  } else if(preco_total >250.00 && preco_total <= 500.00){
      desconto = preco_total*0.10;
  } else if(preco_total > 500.00){
      desconto = preco_total*0.15;
  }
      preco_final = preco_total - desconto;
      printf("Valor do preço unitário:$ %.2f\n", preco_unitario);
      printf("Preço total da nota:$ %.2f\n", preco_total);
      printf("Valor do desconto:$ %.2f\n", desconto);
      printf("Valor do preço final da nota:$ %.2f\n", preco_final);
      return 0;
  }