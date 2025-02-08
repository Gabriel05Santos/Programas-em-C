#include <stdio.h>
#include <stdlib.h>
    
    int main() {
   
    int voto;
    int votos_candidato1 = 0, votos_candidato2 = 0, votos_candidato3 = 0, votos_candidato4 = 0;
    int votosNulos = 0, votosbrancos = 0, totalVotos = 0;

    printf("Informe o seu voto ou digite '0' para finalizar: \n");

    while (1) {
    printf("Codigo do voto respectivo ao candidato:");
    scanf("%d", &voto);

    if (voto == 0) {
    break;
        }
    switch (voto) {
        case 1:
        votos_candidato1++;
        printf("Total de votos para o candidato 1: %d\n", votos_candidato1);
    break;
        case 2:
        votos_candidato2++;
        printf("Total de votos para o candidato 2: %d\n", votos_candidato2);
    break;
        case 3:
        votos_candidato3++;
        printf("Total de votos para o candidato 3: %d\n", votos_candidato3);
    break;
        case 4:
        votos_candidato4++;
        printf("Total de votos para o candidato 4: %d\n", votos_candidato4);
    break;
        case 5:
        votosNulos++;
    break;
        case 6:
        votosbrancos++;
    break;
  
    default:
        printf("Codigo invalido! Informe um codigo valido.\n");
    continue;
        }
     totalVotos++;
    }
    float porcentagemNulos = (totalVotos > 0) ? ((float)votosNulos / totalVotos) * 100 : 0;
    float porcentagemBrancos = (totalVotos > 0) ? ((float)votosbrancos / totalVotos) * 100 : 0;
  
    printf("\nResultados da eleição:\n");
    printf("__________________________________________\n");
    printf("Total de votos nulos: %d\n", votosNulos);
    printf("__________________________________________\n");
    printf("Total de votos em branco: %d\n", votosbrancos);
    printf("__________________________________________\n");
    printf("Porcentagem de votos nulos: %.2f%%\n", porcentagemNulos);
    printf("__________________________________________\n");
    printf("Porcentagem de votos em branco: %.2f%%\n", porcentagemBrancos);
    printf("__________________________________________\n");
    printf("Total de votos para o candidato 1: %d\n", votos_candidato1);
    printf("****************************************\n");
    printf("Total de votos para o candidato 2: %d\n", votos_candidato2);
    printf("****************************************\n");
    printf("Total de votos para o candidato 3: %d\n", votos_candidato3);
    printf("****************************************\n");
    printf("Total de votos para o candidato 4: %d\n", votos_candidato4);
    return 0;
}
