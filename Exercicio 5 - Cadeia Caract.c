#include <stdio.h>
#include <string.h>

    int main() {
  
    char palavra[110];
    int tamanho, palindromo = 1;

    scanf("%s", palavra);

    tamanho = strlen(palavra);

    for (int i = 0; i < tamanho / 2; i++) {
        if (palavra[i] != palavra[tamanho - 1 - i]) {
            palindromo = 0; 
           
        }
    }
    if (palindromo) {
        printf("A palavra '%s' eh um palindromo.\n", palavra);
    } else {
        printf("A palavra nao eh um palindromo.");
    }

    return 0;
}
//ESCREVER SOMENTE EM 'ARARA' ou 'arara'.