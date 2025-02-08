#include <stdio.h>

struct vendedor{
    float total_vendas;
    float sal_fixo;  
    float comissao, sal_final;  
};
typedef struct vendedor Vendedor;

void calcular(Vendedor v[], int n){

    for(int i = 0; i < n; i++){
    printf("\nInforme o valor do salario fixo do VENDEDOR %d: ", i+1);
    scanf("%f", &v[i].sal_fixo);
    printf("Digite o valor total de vendas: ");
    scanf("%f", &v[i].total_vendas);

        v[i].comissao = (6 * v[i].total_vendas)/100;
        v[i].sal_final = v[i].sal_fixo + v[i].comissao; 
        printf("\n");
    }
}

int main(){
    const int quant_vendedores = 3;
    Vendedor v[quant_vendedores];

    calcular(v, quant_vendedores);
  
    for(int i = 0; i < quant_vendedores; i++){
        printf("=======================================================================\n");
        printf("\nInformacoes do VENDEDOR %d:\n", i+1);
        printf("Valor total das vendas: %.2f\n", v[i].total_vendas);
        printf("Salario fixo: %.2f\n", v[i].sal_fixo);
        printf("Salario final: %.2f\n", v[i].sal_final);
        printf("Valor da comissao: %.2f\n", v[i].comissao);
        printf("=======================================================================\n");
    }

    return 0;
}