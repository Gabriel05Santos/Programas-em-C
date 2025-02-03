#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[40];
    int ano_nasc;
    int ano_atual;
}Pessoa;

void calcular_idade(const char *nome_arquivo_saida, int n, Pessoa p[]){
    FILE* arq_saida = fopen(nome_arquivo_saida, "a");
    if(arq_saida == NULL){
        printf("\nERRO ao executar arquivo!!\n");
        exit(1);
    }
    for(int i = 0; i < n; i++){
        int idade = p[i].ano_atual - p[i].ano_nasc;
        fputs(p[i].nome, arq_saida);

        if(idade = 18){
            fputs(" entrando na maior idade\n", arq_saida);
        } else if(idade < 18){
            fputs(" menor de idade\n", arq_saida);
        } else {
            fputs(" maior de idade\n", arq_saida);
        }
    }
    fclose(arq_saida);
}

int main(){
    char nome_arquivo_entrada[50], nome_arquivo_saida[50];
    int n = 2;
    Pessoa p[n];

    printf("Digite um nome para o arquivo de entrada: ");
    fgets(nome_arquivo_entrada, 50, stdin);
    nome_arquivo_entrada[strcspn(nome_arquivo_entrada, "\n")] = 0;

    printf("Digite um nome para o arquivo de saida: ");
    fgets(nome_arquivo_saida, 50, stdin);
    nome_arquivo_saida[strcspn(nome_arquivo_saida, "\n")] = 0;

    FILE* arq_entrada = fopen(nome_arquivo_entrada, "w");
    if(arq_entrada == NULL){
        printf("\nERRO ao executar arquivo!!\n");
        exit(1);
    }
    for(int i = 0; i < n; i++){
        printf("Digite o nome da pessoa %d: ", i+1);
        fgets(p[i].nome, 40, stdin);
        p[i].nome[strcspn(p[i].nome, "\n")] = 0;
        fprintf(arq_entrada, "%s\n", p[i].nome);

        printf("Digite o ano de nascimento: ");
        scanf("%d", &p[i].ano_nasc);
        fprintf(arq_entrada, "%d", p[i].ano_nasc);

        printf("Digite o ano corrente: ");
        scanf("%d", &p[i].ano_atual);
        fprintf(arq_entrada, "%d\n", &p[i].ano_atual);
        getchar();//limpando buffer do teclado
    }
    fclose(arq_entrada);

    arq_entrada = fopen(nome_arquivo_entrada, "r");
    if(arq_entrada == NULL){
        printf("\nERRO ao executar arquivo!!\n");
        exit(1);
    }
    for(int i = 0; i < n; i++){//fazendo leitura dos dados do arquivo de entrada
         fgets(p[i].nome, 50, arq_entrada);
         fscanf(arq_entrada, "%d\n", &p[i].ano_nasc);
         fscanf(arq_entrada, "%d\n", &p[i].ano_atual);
    }
    fclose(arq_entrada);
    calcular_idade(nome_arquivo_saida, n, p);
    return 0;
}
