#include <stdio.h>
#include <stdlib.h>
#define tam 10

typedef struct {
    char nome[30];
    char curso[30];
    float n1, n2;
    int numero;
} Pessoa;

Pessoa alunos[tam];
int quant = 0;

int cadastrar_aluno(){
    if(quant < tam){
        Pessoa aluno;
        scanf("%*c");//limpa o buffer do teclado para qualquer caracter
        printf("Nome do aluno: ");
        fgets(aluno.nome, 30, stdin);
        printf("Informe o curso do aluno: ");
        fgets(aluno.curso, 30, stdin);
        printf("Digite as duas notas do aluno:\n");
        scanf("%f %f", &aluno.n1, &aluno.n2);
        printf("Digite o numero do aluno: ");
        scanf("%d", &aluno.numero);
        alunos[quant] = aluno;
        quant++;
        return 1;
    } else {
        printf("ERRO: vetor cheio!!\n\n");
        return 0;
    }
}
void imprimirVetor(){
    for(int i = 0; i < quant; i++){
        printf("Nomes: %s", alunos[i].nome);
        printf("Curso: %s", alunos[i].curso);
        printf("Notas do aluno:\nNota 1 - %f\nNota 2 - %f\n", alunos[i].n1, alunos[i].n2);
        printf("Numero do aluno: %d\n\n", alunos[i].numero);
    }
}
void salvarArquivo(){
    FILE* pont_arq = fopen("NomeDoAluno.txt", "w");

    if(pont_arq == NULL){
        printf("Falha ao executar arquivo.");
       return 0;
    }
        for(int i = 0; i < quant; i++){
            fprintf(pont_arq, "%s", alunos[i].nome);
            fprintf(pont_arq, "%s", alunos[i].curso);
            fprintf(pont_arq, "%d\n", alunos[i].n1);
            fprintf(pont_arq, "%d\n", alunos[i].n2);
               fclose(pont_arq);
        }
}
void lerArquivo(){
    FILE* pont_arq = fopen("NomeDoAluno.txt", "r");

    if(pont_arq == NULL){
        printf("Falha ao executar arquivo.");
        return 0;
    } else {
        for(int i = 0; i < quant; i++){
         Pessoa aluno;
            fgets(alunos[i].nome, 30, pont_arq);
            fgets(alunos[i].curso, 30, pont_arq);
            fscanf(pont_arq, "%d\n", &aluno.n1);
            fscanf(pont_arq, "%d\n", &aluno.n2);
            alunos[i] = aluno;
         fclose(pont_arq);
        }
    }
}
int main(){
    int cod;
    do{
        printf("\nCadastrar - 1\nImprimir - 2\nSalvar em arquivo - 3\nLer arquivo - 4\nSair - 0\n");
        scanf("%d", &cod);

        switch(cod){
    case 0:
        printf("Finalizado...\n\n");
        break;
    case 1:
        cadastrar_aluno();
        break;
    case 2:
        imprimirVetor();
        break;
    case 3:
        salvarArquivo();
        break;
    case 4:
        lerArquivo();
        break;
    default:
        printf("Opcao invalida!!\n\n");
        break;
        }
    } while(cod != 0);

    return 0;
}
