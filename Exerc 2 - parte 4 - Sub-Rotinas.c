#include <stdio.h>
#include <stdio.h>

struct funcionario {
    float salario;
    char cargo[30];
    char nome[100];
    int idade;
    char sexo;
    int nascimento;
    int codigo;
    int dia, mes, ano; 
    int cpf1, cpf2, cpf3, cpf4;
};
typedef struct funcionario conta;

conta receberRegistro(){
    conta info;

    printf("NOME: ");
    scanf(" %[^\n]", info.nome);

    printf("IDADE: ");
    scanf("%d", &info.idade);

    printf("CPF: ");
    scanf("%03d %03d %03d %02d", &info.cpf1, &info.cpf2, &info.cpf3, &info.cpf4);

    printf("CARGO: ");
    scanf(" %[^\n]", info.cargo);

    printf("DATA DE NASCIMENTO (DD MM AAAA): ");
    scanf( "%02d %02d %04d", &info.dia, &info.mes, &info.ano);

    printf("SEXO (M/F): ");
    scanf(" %c", &info.sexo);

    printf("SALARIO: ");
    scanf("%f", &info.salario);

    printf("CODIGO DO SETOR (0-99): ");
    scanf("%d", &info.codigo);
    printf("\n");
    
    return info;
}

int main(){
    conta cadastro;

    printf("\n Inicializando cadastro do funcionario ..\n");
    printf("-----------------------------------------------------------------------\n");
    cadastro = receberRegistro();

    printf("*************************Dados do Cadastro:****************************\n");
    printf("-----------------------------------------------------------------------\n");
    printf("Nome: %s\n", cadastro.nome);
    printf("Idade: %d anos\n", cadastro.idade);
    printf("Sexo: %c\n", cadastro.sexo);
    printf("CPF: %03d.%03d.%03d-%02d\n", cadastro.cpf1, cadastro.cpf2, cadastro.cpf3, cadastro.cpf4);
    printf("Data de Nascimento: %02d/%02d/%04d\n", cadastro.dia, cadastro.mes, cadastro.ano);
    printf("Cargo: %s\n", cadastro.cargo);
    printf("Salario: %.2f\n", cadastro.salario);
    printf("Codigo do Setor: %d\n", cadastro.codigo);
    printf("-----------------------------------------------------------------------\n");

    return 0;
}