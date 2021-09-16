# include <stdio.h>
# include <stdlib.h>

int main(){
	char time1[40], time2[40];
	float gols1, gols2;
	
	printf("=====================================================\n");
	printf("Declare as informacoes do primeiro time nessa partida\n");
	printf("=====================================================\n");
	printf("Nome do primeiro time: ");
	scanf("%s", &time1);
	printf("Numero de gols do %s: ", time1 );
	scanf("%f", &gols1);
	system("cls");
	
	printf("====================================================\n");
	printf("Declare as informacoes do segundo time nessa partida\n");
	printf("====================================================\n");
	printf("Nome do segundo time: ");
	scanf("%s", &time2);
	printf("Numero de gols do %s: ", time2 );
	scanf("%f", &gols2);
	system("cls");
	
	if(gols1 == gols2){
		printf("O jogo terminou empatado em %.0f a %.0f \n", gols1, gols2);
	}
	
	if(gols1 > gols2){
		printf("O vencedor foi %s com %.0f gols\n", time1 , gols1);
	}
	
	if(gols2 > gols1){
		printf("O vencedor foi %s com %.0f gols \n", time2, gols2);
	};
	
	system("pause");
	return 0;
}
