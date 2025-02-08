#include <stdio.h>
#include <stdlib.h>
 struct populacao {
    int NumerosDfilhos;
    char sexo;
    float salario;
    int idade;
   };
    int main (){
    
    char sexo[] = {'masculino','Masculino','feminino','Feminino','\0'};
    int quantMulheres = 0, menorIdade = 100, i=1;
    float somaFilhos = 0;
    int numPessoas = 0, somaSalMulheres = 0, somaIdade = 0;
    float maiorSal = 0, soma_salario = 0;
    char resp[] = {'N','n','\0'};
    
    struct populacao P1;
    
    do {
    printf("Digite sua idade:\n");
    scanf("%d",&P1.idade);
     if(P1.idade == 0){
        break;
    }
    printf("Informe o salário da %d° pessoa:\n",i++);
    scanf("%f",&P1.salario);
   
    printf("Informe seu sexo: M(masculino) ou F(feminino).\n");
    scanf(" %s",&P1.sexo);
    
    printf("Informe o número de filhos: \n");
    scanf("%d",&P1.NumerosDfilhos);
    
    printf("Quer continuar: S(sim) ou N(não)\n");
    scanf(" %c",&resp[i]);
  
      somaFilhos += P1.NumerosDfilhos;
      somaIdade += P1.idade;
      soma_salario += P1.salario;
      numPessoas++;
  
    if(P1.sexo == 'feminino' || P1.sexo == 'Feminino' && P1.salario < 300.0){
        somaSalMulheres += P1.idade;
        quantMulheres++; 
      }
     if(P1.salario > maiorSal){
       maiorSal = P1.salario;
     }
     if(P1.idade < menorIdade){
         menorIdade = P1.idade;
     }
    } while (resp[i] == 's' || resp[i] == 'S');
    printf("\n\n");
    if(quantMulheres > 0){
    printf("Média de idade das mulheres com salário inferior a R$ 300,00: %f\n",somaSalMulheres/quantMulheres);
    }
    printf("\n");
    if(numPessoas > 0){
    printf("Média de salário da população: %.2f\n",soma_salario/numPessoas);
    printf("\n");
    printf("Média do número de filhos: %f\n",somaFilhos/numPessoas);
    }
    printf("\n");
    printf("Maior salário: %.2f\n",maiorSal);
    printf("\n");
    printf("A menor idade eh: %d\n",menorIdade);
    
    return 0;
    }