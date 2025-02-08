#include <stdio.h>

void converteHora(int totalSegundos, int *hora, int *min, int *seg){
   *hora = totalSegundos / 3600;
   *min = (totalSegundos % 3600) / 60;
   *seg = totalSegundos % 60;
}

int main(){
    int totalSegundos, horas, minutos, segundos;

    printf("Digite uma quantidade total em segundos:\n");
    scanf("%d", &totalSegundos);

    converteHora(totalSegundos, &horas, &minutos, &segundos);

    printf("%d : %d : %d\n", horas, minutos, segundos);

    return 0;
}