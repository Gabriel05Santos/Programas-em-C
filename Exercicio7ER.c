#include <stdio.h>
#include <stdlib.h>
    
    int main() {
   
    int idade, opiniao;
    int total_pessoas = 15;
    int soma_idades_otimo = 0;
    int contgOtimo = 0;
    int contgRegular = 0;
    int contgBom = 0;

    for (int i = 0; i < total_pessoas; i++) {
        printf("Digite a idade do espectador: %d", i + 1);
        scanf("%d", &idade);
        printf("Digite a opiniao do espectador %d (1 - regular; 2 - Bom; 3 - Otimo): ", i + 1);
        scanf("%d", &opiniao);

        switch (opiniao) {
    case 3:
        soma_idades_otimo += idade;
        contgOtimo++;
            break;
    case 2:
        contgBom++;
            break;
    case 1:
        contgRegular++;
            break;
        default:
        printf("Opiniao inválida! \n");
        i--;
            break;
        }
    }
    float media_idade_otimo = (contgOtimo > 0) ? (float)soma_idades_otimo / contgOtimo : 0;

    float perc_bom = ((float)contgBom / total_pessoas) * 100;

    printf("Media das idades das pessoas que responderam 'ótimo': %.2f\n", media_idade_otimo);
    printf("Quantidade de pessoas que responderam 'regular': %d\n", contgRegular);
    printf("Percentagem de pessoas que responderam 'bom': %.2f%%\n", perc_bom);

    return 0;
}
