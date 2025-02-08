#include <stdio.h>
#include <string.h>

    int main() {
    
    char frase[110];
    int contador = 0, i;

    printf("Digite uma frase qualquer no máximo 110 caracteres:\n ");
    fgets(frase,sizeof(frase), stdin);

    for (i = 0; frase[i] != '\0'; i++) {
        if(frase[i] == 'a' || frase[i] == 'e' || 
        frase[i] == 'i' || 
        frase[i] == 'o' || frase[i] == 'u' ||
        frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I'  || 
        frase[i] == 'O' || frase[i] == 'U') {
            contador++;
    }
    }
       printf("Quantidade de vogais: %d\n", contador);

    return 0;
}
    