#include <stdio.h>
#include <stdlib.h>
#define n 2

typedef struct{
	unsigned long int habit;
	char nome[40];
}City;

void Line(){
	printf("\n=================================================\n");
}

void LerArquivoEntrada(FILE* arq, City cidade[], int n){
	for(int i = 0; i < n; i++){
		fscanf(arq, "%s %lu", cidade[i].nome, &cidade[i].habit);
	}
}

void LerInfo(FILE* arq){
	int i;
    City cidade[n];

	for(i = 0; i < n; i++){
	 Line();
		printf("Digite o nome da cidade %d:\n", i+1);
        fgets(cidade[i].nome, 40, stdin);
        cidade[i].nome[strcspn(cidade[i].nome, "\n")] = 0;//REMOVE ( \N ) NO FINAL DA STRING
        printf("\n");
		printf("Digite a quantidade de habitantes:\n");
		scanf("%lu", &cidade[i].habit);
		getchar();//LIMPANDO BUFFER DO TECLADO
		fprintf(arq, "%s\n", cidade[i].nome);
		fprintf(arq, " %lu\n", cidade[i].habit);
	}
}

int main(){

	FILE* arq = fopen("text.txt", "w");

	if(arq == NULL){
		printf("\nERROR ao executar arquivo!!\n");
		exit(1);
	}

	LerInfo(arq);
	fclose(arq);

	arq = fopen("text.txt", "r");

	if(arq == NULL){
        printf("\nERRO ao executar arquivo!!\n");
        exit(1);
	}

	LerArquivo(arq);

    FILE* arq_saida = fopen("TextSaida.txt", "a");
        City cidade[n];
        int maior = 0;
    if(arq_saida == NULL){
        printf("\nERRO ao executar arquivo!!\n");
        exit(1);
    }

    Line();
    for(int i = 0; i < n; i++){
        if(cidade[i].habit > maior){
            maior = cidade[i].habit;
        }
    }
    for(int i = 0; i < n; i++){
        if(cidade[i].habit == maior){
            printf("Cidade mais populosa: %s\n", cidade[i].nome);
            printf("Habitantes: %lu\n", cidade[i].habit);
        }
    }
	fclose(arq);
    fclose(arq_saida);

	return 0;
}

