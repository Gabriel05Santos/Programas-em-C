#include <stdlib.h>
#include <stdio.h>

int main(){

    FILE* arq = fopen("texto.txt", "w");
    char texto[256];
    int n;

    if(arq == NULL){
        printf("\nERRO ao executar arquivo!!\n");
        exit(1);
    }
    printf("\nDigite uma frase ou palavra:\n");
    fgets(texto, 256, stdin);

    n = fputs(texto, arq);

    if(n == EOF){
        printf("\nErro ao tentar gravar os dados! \n");
    }
    else{
        printf("\nDados gravados com sucesso. \n");
    }
    fclose(arq);

    arq = fopen("texto.txt", "r");
    if (arq == NULL) {
        printf("\nERRO ao abrir arquivo para leitura!\n");
        exit(1);
    }

    FILE* newArq = fopen("newText.txt", "w");
    if(newArq == NULL){
        printf("\nERRO ao executar arquivo!!\n");
        fclose(arq);
        exit(1);
    }

    while(fgets(texto, 256, arq) != NULL){
    for(int i = 0; i < strlen(texto); i++){
        if(texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' ||
            texto[i] == 'u' || texto[i] == 'A' || texto[i] == 'E' || texto[i] == 'I' ||
            texto[i] == 'O' || texto[i] == 'U'){
            texto[i] = '*';
            }
        }
        fputs(texto, newArq);
    }
    fclose(arq);
    fclose(newArq);

    return 0;
}

