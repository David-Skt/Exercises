# include <stdio.h>
# include <stdlib.h>

int main(){
	char produto[10], vali[10], impor[10] = "importado", naci[10] = "nacional";
	float valor;
	
	printf("======================\n");
	printf("| Calculo de produto |\n");
	printf("======================\n");
	
	printf("Nome do produto: ");
	scanf("%s", &produto);
	printf("Valor do %s : ", produto);
	scanf("%f", &valor);
	system("cls");
	
	printf("======================\n");
	printf("| Calculo de produto |\n");
	printf("======================\n");
	printf("O produto %s e %s ou %s? : ", produto, impor, naci);
	scanf("%s", &vali);
	//printf("%s \n", vali);
	
	if(strcmp(vali, "importado") == 0){
		valor = (valor * 2.17); 
		printf("Seu produto importado ficara: %.2f reais\n", valor);
	};
	
	if(strcmp(vali, "nacional") == 0){
		valor = valor;
		printf("Seu produto nacional ficara: %.2f reais\n", valor);
	};
	
	
	system("pause");
	return 0;
}

