# include <stdio.h>
# include <stdlib.h>

int main (){
	
	int eleitor1, eleitor2, eleitor3, eleitor4, 
	validos, nulos, brancos, total;
	
	float cent1, cent2, cent3, cent4;
	
	printf("|========================|\n");
	printf("| Municipio de guarulhos |\n");
	printf("|========================|\n");	
	printf("| Total de eleitores: 4 |\n");
	printf("-------------------------\n");
	
	printf("| 1 eleitor com um total de votos: ");
	scanf("%d", &eleitor1);
	printf("| 2 eleitor com um total de votos: ");
	scanf("%d", &eleitor2);
	printf("| 3 eleitor com um total de votos: ");
	scanf("%d", &eleitor3);
	printf("| 4 eleitor com um total de votos: ");
	scanf("%d", &eleitor4);
	
	validos = eleitor1 + eleitor2 + eleitor3 + eleitor4;
	
	printf("------------------------\n");
	printf("| Votos validos |: %d \n", validos);
	printf("| Votos nulos |: ");
	scanf("%d", &nulos);
	printf("| Votos brancos |: ");
	scanf("%d", &brancos);
	printf("------------------------\n");
	
	total = validos + nulos + brancos;
	
	printf(" * Numero total de votos: %d \n", total);
	printf("------------------------\n");
	
	cent1 = eleitor1 * 100 / total;
	printf("| Percentual do 1 eleitor |: %.2f \n", cent1);
	
	cent2 = eleitor2 * 100 / total;
	printf("| Percentual do 2 eleitor |: %.2f \n", cent2);
	
	cent3 = eleitor3 * 100 / total;
	printf("| Percentual do 3 eleitor |: %.2f \n", cent3);
	
	cent4 = eleitor4 * 100 / total;
	printf("| Percentual do 4 eleitor |: %.2f \n", cent4);
	
	
	system("pause");
	return 0;
}
