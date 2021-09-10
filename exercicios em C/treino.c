#include <stdio.h> /*leitura e escrita do programa*/
#include <stdlib.h> /*biblioteca auxiliar*/

int main(){
	float numero1, numero2, media;
	
	printf("---------------------\n");
	printf("       FEDERAL       \n");
	printf("---------------------\n");
	printf("Primeira nota: ");
	scanf("%f", &numero1);
	printf("Segunda nota: ");
	scanf("%f", &numero2);
	printf("---------------------\n");
	media = ((numero1 + numero2) /2);
	printf("A media do aluno foi: %.0f \n", media); // .0: CASAS DECIMAIS 
		printf("---------------------\n");
	if (media >= 6){
		printf("Aluno aprovado.\n");
	};
	if(media == 5){
		printf("Aluno em recuperacao.\n");
	};
	if(media <= 4){
		printf("Aluno reprovado.\n");
	};
	
	
	system("pause"); //pausa da tela somente para Windows
	return 0; //retorno da função main
}
