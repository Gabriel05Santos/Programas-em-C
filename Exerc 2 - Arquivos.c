#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE* pont_arq;

    char texto[256];
    int r;

    pont_arq = fopen("Texto.txt", "w");

    if(pont_arq == NULL){
        printf("\nErro ao executar o arquivo!!\n\n");
        return 1;
    }

	    printf("\nDigite um texto ou frase: ");
        fgets(texto, 256, stdin);

	    r = fputs(texto, pont_arq);

        if(r == EOF){
            printf("\nErro ao tentar gravar os dados! \n");
        }
            else{
            printf("\nDados gravados com sucesso. \n");
        }
            fclose(pont_arq);

     pont_arq = fopen("Texto.txt", "r");//reabrindo arquivo no modo leitura

    int quant_vogal = 0;

    if(pont_arq == NULL){
        printf("\nErro ao executar o arquivo!!\n\n");
        return 1;
    }

    while(fgets(texto, 256, pont_arq) != NULL){
        for(int i = 0; i < strlen(texto); i++){
            if(texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' ||
                texto[i] == 'u' || texto[i] == 'A' || texto[i] == 'E' || texto[i] == 'I' ||
                 texto[i] == 'O' || texto[i] == 'U'){
                    quant_vogal++;
                 }
        }
        printf("\n%s\n", texto);
    }
        printf("\nQuantidade de vogais: %d\n", quant_vogal);
        fclose(pont_arq);
    return 0;
}
