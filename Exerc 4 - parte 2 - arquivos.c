#include <stdio.h>
#include <stdlib.h>

int main(){
    int codigo, quant_vendas;
    float vendas;

    FILE* arq = fopen("planilhaDeVendas.txt", "w");
    if(arq == NULL){
        printf("\nERRO ao executar arquivo!!\n");
        exit(1);
    }

    printf("Digite o codigo da empresa filial (1 - 2 - 3 - 4) ou ( 0 ) para sair: ");
    scanf("%d", &codigo);

    switch(codigo){
    case 0:
        printf("\nFinalizando..\n\n");
        break;

    case 1:
            printf("\nDigite a quantidade de vendas no dia da filial 1: ");
            scanf("%d", &quant_vendas);
        for(int i = 0; i < quant_vendas; i++){
            printf("Digite o valor obtido na %d(a) venda: ", i+1);
            scanf("%f", &vendas);
        }
        for(int i = 0; i < quant_vendas; i++){
            fprintf(arq, "\n1,%d", &vendas);
        }
        break;

    case 2:
            printf("\nDigite a quantidade de vendas no dia da filial 2: ");
            scanf("%d", &quant_vendas);
        for(int i = 0; i < quant_vendas; i++){
            printf("Digite o valor obtido na %d(a) venda: ", i+1);
            scanf("%f", &vendas);
        }
        for(int i = 0; i < quant_vendas; i++){
            fprintf(arq, "\n2,%d", &vendas);
        }
        break;

    case 3:
            printf("\nDigite a quantidade de vendas no dia da filial 3: ");
            scanf("%d", &quant_vendas);
        for(int i = 0; i < quant_vendas; i++){
            printf("Digite o valor obtido na %d(a) venda: ", i+1);
            scanf("%f", &vendas);
        }
        for(int i = 0; i < quant_vendas; i++){
            fprintf(arq, "\n3,%d", &vendas);
        }
        break;

    case 4:
            printf("\nDigite a quantidade de vendas no dia da filial 4: ");
            scanf("%d", &quant_vendas);
        for(int i = 0; i < quant_vendas; i++){
            printf("Digite o valor obtido na %d(a) venda: ", i+1);
            scanf("%f", &vendas);
        }
        for(int i = 0; i < quant_vendas; i++){
            fprintf(arq, "\n4,%d", &vendas);
        }
        break;

    default:
            printf("\nERRO codigo invalido!!\n");
    break;
    }
    fclose(arq);

    arq = fopen("planilhaDeVendas.txt", "r");//reabrindo arquivo em modo leitura
    if(arq == NULL){
        printf("\nERRO ao executar arquivo!!\n");
        exit(1);
    }
     do{
        fscanf(arq, "%d", &vendas);
        printf(" ");
     }while(arq != NULL);



    return 0;
}
