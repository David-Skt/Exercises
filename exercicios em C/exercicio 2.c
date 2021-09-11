#include <stdio.h> /*leitura e escrita do programa*/
#include <stdlib.h> /*biblioteca auxiliar*/

int main() { 
	int salario;
	double menor, maior , aliquota , aliquota2;
	
	printf("==========================================\n");
	printf("Vamos verificar seu imposto de renda anual\n");
	printf("==========================================\n");
	printf("Informe seu salario: ");
	scanf("%d", &salario);
	
	menor = 1372.81;
	
	if(salario < menor){
		printf("Seu salario esta insento!\n");
	};
	
	maior = 2743.25;
	
	if((salario >= menor) && (salario <= maior)){ //entre os dois valores
		aliquota = salario * (15.0 / 100);
		printf("Do seu salario sera retirado uma aliquota de 15 por cento : %.0f \n", aliquota);
	};
	
	if(salario > maior){
		aliquota2 = salario * (25.0 / 100);
		printf("Do seu salario sera retirado uma aliquota de 25 por cento : %.0f \n", aliquota2);
	};
	
	
	system ("pause");
	return 0; 
}
