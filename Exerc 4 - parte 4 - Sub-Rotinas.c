#include <stdio.h>
#include <stdio.h>

struct produto{
    int codigo;
    char descricao[50];
    float valor_compra, valor_venda;
    int quant_estoque, estoque_minimo;
};
typedef struct produto Brinquedo;

void cadastrar_produtos(Brinquedo p[], int n);
void mostrar_estoque(Brinquedo p[], int n);
void calcular_lucro(int cod, Brinquedo v[], int quant);

void cadastrar_produtos(Brinquedo p[], int n){
    int c;

    for(int i = 0; i < n; i++){
    printf("\nDigite o codigo do produto - %d: ", i+1);
    scanf("%d", &p[i].codigo);
    printf("Descricao do produto - %d: ",i+1);
    scanf(" %[^\n]", p[i].descricao);
    printf("Valor de compra do produto - %d: ", i+1);
    scanf("%f", &p[i].valor_compra);
    printf("Valor de venda do produto - %d: ", i+1);
    scanf("%f", &p[i].valor_venda);
    printf("Quantidade em estoque do produto - %d: ", i+1);
    scanf("%d", &p[i].quant_estoque);
    printf("Quantidade minima em estoque do produto - %d: ", i+1);
    scanf("%d", &p[i].estoque_minimo);
    }
    printf("Digite o codigo do produto para calcular o lucro obtido com a venda: ");
    scanf("%d", &c);
    calcular_lucro(c, p, n);
}

void mostrar_estoque(Brinquedo p[], int n){
    printf("\nProdutos com estoque abaixo do permitido: \n");

    for(int i = 0; i < n; i++){
        if(p[i].quant_estoque < p[i].estoque_minimo){
            printf("Produto (codigo): %d\nDescricao: %s\nQuantidade em estoque: %d\nEstoque minimo: %d\n\n",
            p[i].codigo, p[i].descricao, p[i].quant_estoque, p[i].estoque_minimo);
        }
    }
}

void calcular_lucro(int cod, Brinquedo v[], int quant){
    float lucro_obtido, lucro_perc;
    int quant_vendida;

    printf("Digite a quantidade vendida do produto: ");
    scanf("%d", &quant_vendida);

    for(int i = 0; i < quant; i++){
        if(cod == v[i].codigo){
            lucro_obtido = quant_vendida * (v[i].valor_venda - v[i].valor_compra);
            lucro_perc = (lucro_obtido / (v[i].valor_compra * quant_vendida)) * 100;
            printf("Produto: %d\nLucro total obtido: %.2f\nLucro em percentual: %.2f%\n", cod, lucro_obtido, lucro_perc);
            return;
        }
    }
        printf("Produto %d nao encontrado!!\n", cod);
}

int main(){
    const int quant_produtos = 2;
    Brinquedo produts[quant_produtos];

    cadastrar_produtos(produts, quant_produtos);
    mostrar_estoque(produts, quant_produtos);
    return 0;
}