#include <stdlib.h>
#include <stdio.h>

int main(){

    char n;
    FILE* arq = fopen("texto.txt", "w");

    if(arq == NULL){
        printf("ERRO ao executar arquivo!!");
            exit(1);
    }

    printf("Digite um caracter ou ( 0 ) para finalizar:\n");
    do{
        n = getchar();
        while(getchar() != '\n');//limpa o buffer de entrada
        if(n != '0'){// so escreve no arquivo se nao for zero
           fputc(n, arq);
        }
    }while(n != '0');

    fclose(arq);

    arq = fopen("texto.txt", "r");//abrindo arquivo em modo leitura
    int quant = 0;

    if(arq == NULL){
        printf("\nERRO ao executar arquivo!!\n");
        exit(1);
    }
    while((n = fgetc(arq)) != EOF){
            quant++;
    }
    printf("Quantidade de caracteres: %d\n", quant);
    fclose(arq);
    return 0;
}
