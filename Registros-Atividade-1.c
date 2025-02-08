#include <stdio.h>
#include <stdlib.h>
 struct professor {
    int codigo;
    int horas_ministradas;
    char sexo;
    float sal_hora;
    float salarioLiquido;
    float salario_bruto;
   };
    int main (){

    int contadorM = 0, contadorF = 0,soma_masculino = 0, soma_feminino = 0;
	char sexo[] = {'M','F','\0'};
    float media_masculino = 0;
    float media_feminino = 0, desconto;
    int i;
    struct professor P1[10];

    for( i = 0; i < 10; i++){
        printf("Digite o código do professor %d\n",i);
        scanf("%d", &P1[i].codigo);
        fflush(stdin);
        printf("\n\n");
        printf("Digite as horas de aulas dadas do professor %d:\n",i);
        scanf("%d",&P1[i].horas_ministradas);
        fflush(stdin);
    	printf("\n\n");
        printf("Informe o sexo do professor: M(masculino) , ou F(feminino)\n", i);
        scanf(" %c",&P1[i].sexo);
        fflush(stdin);
        printf("\n\n");
	}
    for(i = 0; i < 10; i++){
            P1[i].salario_bruto = P1[i].horas_ministradas * 60.50;
        if(P1[i].horas_ministradas < 70){
             desconto = 0.08;
             P1[i].salarioLiquido = P1[i].salario_bruto - (P1[i].salario_bruto * desconto);
        } else {
            desconto = 0.05;
             P1[i].salarioLiquido = P1[i].salario_bruto - (P1[i].salario_bruto * desconto);
        }
    printf("PROFESSOR: %d\nCodigo: %d\nSalario Bruto: R$ %.2f\nDesconto: %.2f\nSalario Liquido: R$ %.2f\n\n", i, P1[i].codigo, P1[i].salario_bruto, desconto, P1[i].salarioLiquido);
    }
    for(int i = 0; i < 10; i++){
       if(P1[i].sexo == 'M' || P1[i].sexo == 'm'){
       soma_masculino += P1[i].salario_bruto;
       contadorM++;
      }
    } 
    for(int i = 0; i < 10; i++){
       if(P1[i].sexo == 'F' || P1[i].sexo == 'f'){
       soma_feminino += P1[i].salario_bruto;
       contadorF++;
      } 
    }
      if(contadorF > 0) {
        media_feminino = soma_feminino / contadorF;
    } else {
        media_feminino = 0;
    }

    if(contadorM > 0) {
        media_masculino = soma_masculino / contadorM;
    } else {
        media_masculino = 0;
    }
  printf("Media dos salários brutos dos professores do sexo masculino: R$ %.2f\n",media_masculino);
  printf("Media dos salários brutos dos professores do sexo feminino: R$ %.2f\n",media_feminino);
    return 0;
    }