#include <stdio.h>
#include <string.h>
   
    int main() {
   
   char nome[110];
 
    printf("Digite um nome completo: ");
    scanf("%[^\n]", nome);

    char* primeiro_nome = strtok(nome, " ");
    char* ultimo_sobrenome = strrchr(nome, ' ');

    while (primeiro_nome != ultimo_sobrenome) {
        printf("%c. ", *primeiro_nome);
        primeiro_nome = strtok(NULL, " ");
    }
    printf("%s\n", ultimo_sobrenome);

    return 0;
}
