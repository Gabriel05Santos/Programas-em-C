#include <stdio.h>
#include <stdlib.h>
    
    int main() {
 
    int idade;
    float peso, altura;
    int total_d_pessoas = 10;
    int soma_idades = 0;
    int peso_maior90altura_menor150 = 0;
    int altura_maior190= 0;
    int idade10e30altura_maior190= 0;

    for (int i = 0; i < total_d_pessoas; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);
        printf("Digite o peso da pessoa %d (em kg): ", i + 1);
        scanf("%f", &peso);
        printf("Digite a altura da pessoa %d (em metros): ", i + 1);
        scanf("%f", &altura);

        soma_idades += idade;
        
        if (peso > 90 && altura < 1.50) {
                peso_maior90altura_menor150++;
        }

        if (altura > 1.90) {
                altura_maior190++;
            
            if (idade >= 10 && idade <= 30) {
                idade10e30altura_maior190++;
            }
        }
    }
    float media_idades = (float)soma_idades / total_d_pessoas;

    float perc_idade10e30altura_maior190= 0;
    if (altura_maior190 > 0) {
        perc_idade10e30altura_maior190 = ((float)idade10e30altura_maior190 / altura_maior190) * 100;
    }
    printf("Media das idades: %.2f\n", media_idades);
    printf("Quantidade de pessoas com peso superior a 90kg e altura inferior a 1.50m: %d\n",peso_maior90altura_menor150);
    printf("Porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1.90m: %.2f%%\n", perc_idade10e30altura_maior190);

    return 0;
}
