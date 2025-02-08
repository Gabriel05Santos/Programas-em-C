#include <stdio.h>

void calcular_circulo(double raio, double* valor_perimetro, double* valor_area){

	 *valor_perimetro = 2 * (3.14 * raio);
	 *valor_area = 3.14 * (raio * raio);
}

int main(){
	double raio, area, perimetro;

    
	printf("Digite os valores do raio, perimetro e area: \n");
	scanf("%lf", &raio);
	
	calcular_circulo(raio, &perimetro, &area);
	
	printf("Area do Circulo: %.1lf\nPerimetro do Circulo: %.1lf\n", area, perimetro);
		
	return 0;
}
