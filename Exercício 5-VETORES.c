#include <stdio.h>

int main() {
   
    int ra[7];
    float medias[7];
    int maior_media = 0;

    for (int i = 0; i < 7; i++) {
        printf("Digite o RA do %d° aluno: ", i + 1);
        scanf("%d", &ra[i]);
        printf("Digite a media final do %d° aluno: ", i + 1);
        scanf("%f", &medias[i]);
    }

    for (int i = 1; i < 7; i++) {
        if (medias[i] > medias[maior_media]) {
            maior_media = i;
        }
    }
    printf("O RA do aluno com a maior media eh: %d\n", ra[maior_media]);
    for (int i = 0; i < 7; i++) {
        if (medias[i] < 7.0) {
            float nota_necessaria = (5.0 * 2) - medias[i];
            printf("Aluno com RA %d precisa tirar %.2f na prova de exame final para ser aprovado.\n", ra[i], nota_necessaria);
        }
    }

    return 0;
}
