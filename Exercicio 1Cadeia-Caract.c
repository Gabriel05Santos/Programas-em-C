#include <stdio.h>
#include <string.h>
int main () {

	char nomes[5][15];
   
    printf("Informe cinco nomes:\n");
    
    for(int i = 0; i < 5; i++){
       scanf("%s", nomes[i]);
          
    }
      printf("\n");
    for(int i = 0; i < 5; i++){
       printf("%s\n\n", nomes[i]);
    }
   return 0;
}