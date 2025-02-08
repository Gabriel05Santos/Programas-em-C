#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
 
    int num_lancamentos = 20;

   
    int lancamentos[num_lancamentos];
    int frequencia[6] = {0};

    srand(time(NULL));

    for (int i = 0; i < num_lancamentos; i++) {
        lancamentos[i] = (rand() % 6) + 1;
        frequencia[lancamentos[i] - 1]++;
    }
    printf("Numeros sorteados:\n");
    for (int i = 0; i < num_lancamentos; i++) {
        printf("%d ", lancamentos[i]);
    }
    
    printf("\nFrequencia dos numeros sorteados:\n");
    for (int i = 0; i < 6; i++) {
        printf("Numero %d: %d vezes.\n", i + 1, frequencia[i]);
    }

    return 0;
}
    