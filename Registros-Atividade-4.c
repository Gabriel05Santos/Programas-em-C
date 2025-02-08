#include <stdio.h>
#include <string.h>

typedef struct {
    int codigo;
    char nome[16];
    float valor;
    int quantidade;
} Produto;

    void lerProdutos(Produto produtos[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite o codigo do produto %d: ", i + 1);
        scanf("%d", &produtos[i].codigo);
        printf("\n");
        
        printf("Digite o nome do produto %d: ", i + 1);
        scanf("%s", produtos[i].nome);
        printf("\n");
        
        printf("Digite o preco do produto %d: ", i + 1);
        scanf("%f", &produtos[i].valor);
        printf("\n");
        
        printf("Digite a quantidade do produto %d: ", i + 1);
        scanf("%d", &produtos[i].quantidade);
    }
}

    void processarQProdutos(Produto produtos[], int n) {
    int codigo, quantidade;
    
    while (1) {
        printf("Digite o codigo do produto ou (0 para finalizar): ");
        scanf("%d", &codigo);
        
        if (codigo == 0) {
            break;
        }
      printf("Digite a quantidade:\n");
      scanf("%d", &quantidade);
        
    int encontrado = 0;
    
    for (int i = 0; i < n; i++) {
  
     if (produtos[i].codigo == codigo) {
         encontrado = 1;
    
     if (produtos[i].quantidade >= quantidade) {
         produtos[i].quantidade -= quantidade;
   
      printf("Pedido atendido. Estoque atualizado.\n");
     } else {
      printf("Não há quantidade suficiente em estoque!\n");
      }
      break;
     }
    }
      if (!encontrado) {
        printf("O produto nao foi encontrado!\n");
      }
     }
    }

int main() {
    Produto produtos[15];
    
    printf("Cadastro de produtos:\n");
    lerProdutos(produtos, 15);
    
    printf("Processamento de pedidos:\n");
    processarQProdutos(produtos, 15);
    
    return 0;
}