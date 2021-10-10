#include <stdio.h> 
#include <stdlib.h>

//CONTADOR

//procedimentos
void topo(){
   printf ("==================\n");
   printf ("|      MENU      |\n");
   printf ("==================\n");
   printf ("| [1] de  1 a 10 |\n");
   printf ("| [2] de 10 a  1 |\n");
   printf ("| [3] de Sair    |\n");
   printf ("==================\n");
};

void conteudo(){
	int S;
	
	scanf("%d", &S);
	
	if (S == 1){
		for (S = 1; S <= 10; S++){
			printf("%d .. ", S);
		}
	}
	
	if(S == 2){
		for (S = 10; S >= 1; S--){
			printf("%d .. ", S);
		}
	}
	
	if(S == 3){
		printf("SAINDO...\n");
	}
};

//chamada
int main () {
	
	topo();
	conteudo();
	
	system ("pause");
	return 0;
}
