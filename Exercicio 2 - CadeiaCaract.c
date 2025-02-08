#include <stdio.h>
#include <string.h>

    int main() {
    
    char musica[100];
    char caractere;
    int ocorrencia = -1;

    printf("Digite o nome da música: ");
    fgets(musica, 100, stdin);

    printf("Informe um caractere: ");
    scanf(" %c", &caractere);

    for (int i = 0; i < strlen(musica); i++) {
        if (musica[i] == caractere) {
            ocorrencia = i;
            break;
        }
    }
    if (ocorrencia != -1) {
        printf("Ocorrencia de caractere na posicao : %d\n", ocorrencia);
    } else {
        printf("Caractere nao encontrado!\n");
    }

    return 0;
}
    