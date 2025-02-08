#include <stdio.h>

void calcularCategoria(int idade , char* categoria){

		if(idade >= 5  && idade <= 7){
			categoria = "Infantil A";
			printf("CATEGORIA DO NADADOR(A): %s\n", categoria);

		} else if(idade >= 8 && idade <= 10){
			categoria = "Infantil B";
			printf("CATEGORIA DO NADADOR(A): %s\n", categoria);

		} else if(idade >= 11 && idade <= 13){
			categoria = "Juvenil A";
			printf("CATEGORIA DO NADADOR(A): %s\n", categoria);

		} else if(idade >= 14 && idade <= 17){			
			categoria = "Juvenil B";
			printf("CATEGORIA DO NADADOR(A): %s\n", categoria);

		} else if(idade >= 18){
			categoria = "Adulto";
			printf("CATEGORIA DO NADADOR(A): %s\n", categoria);

		} else {
			printf("Idade fora das categorias definidas!!\n");
		}
}

int main(){
	int idade;
	char categoria[55];

	printf("Informe a idade do atleta: \n");
	scanf("%d", &idade);
	
	calcularCategoria(idade, categoria);

	return 0;
}