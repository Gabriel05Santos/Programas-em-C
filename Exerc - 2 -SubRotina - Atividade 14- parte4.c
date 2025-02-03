#include <stdio.h>
#include <stdlib.h>
#define quant_func 1

struct cadastro {
    char nome[30], cargo[30], sexo;
    int idade, dia ,mes , ano, codigo, cpf1, cpf2, cpf3, cpf4;
    float salario;
};
typedef struct cadastro Funcionario;

Funcionario cadastro_funcionarios(Funcionario vet[]){

    for(int i = 0; i < quant_func; i++){
        printf("\nCadastro do funcionario ( %d ): \n", i+1);
        printf("Nome: ");
        scanf(" %[^\n]", vet[i].nome);
        printf("Idade: ");
        scanf("%d", &vet[i].idade);
        printf("Sexo: ");
        scanf(" %c", &vet[i].sexo);
        printf("Data de Nascimento: ");
        scanf("%02d %02d %04d", &vet[i].dia, &vet[i].mes, &vet[i].ano);
        printf("Cargo: ");
        scanf(" %[^\n]", vet[i].cargo);
        printf("Salario: ");
        scanf("%f", &vet[i].salario);
        printf("Codigo: ");
        scanf("%d", &vet[i].codigo);
        printf("CPF: ");
        scanf("%03d %03d %03d %02d", &vet[i].cpf1, &vet[i].cpf2, &vet[i].cpf3, &vet[i].cpf4);
    }
    printf("\n");
}
int main (){
    Funcionario dados[quant_func];

    printf("\n Inicializando cadastro do(s) funcionario(s) ..\n");
	printf("-----------------------------------------------------------------------\n");
    cadastro_funcionarios(dados);

    for(int i = 0; i < quant_func; i++){
        printf("*************************Dados do Cadastro:****************************\n");
        printf("-----------------------------------------------------------------------\n");
        printf("\nFuncinario ( %d ): \n", i+1);
        printf("Nome: %s\n", dados[i].nome);
        printf("Idade: %d anos\n", dados[i].idade);
        printf("Sexo: %c\n", dados[i].sexo);
        printf("CPF: %03d.%03d.%03d - %02d\n", dados[i].cpf1, dados[i].cpf2, dados[i].cpf3, dados[i].cpf4);
        printf("Data de Nascimento: %02d/%02d/%04d\n", dados[i].dia, dados[i].mes, dados[i].ano);
        printf("Cargo: %s\n", dados[i].cargo);
        printf("Salario: %.2f\n", dados[i].salario);
        printf("Codigo do Setor: %d\n", dados[i].codigo);
        printf("-----------------------------------------------------------------------\n");
    }
    return 0;
}
