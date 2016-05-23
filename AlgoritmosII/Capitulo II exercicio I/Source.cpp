#include "stdio.h"

int main()
{
	int num = 0, maior = 0, menor = 0, i = 1;
	
	printf("Programa que le cinco numeros inteiros e imprime o maior e o menor digitados");
	printf("\n\nInforme 5 numeros inteiros\n --------------------------------\n");

	while (i <= 5 ) {
		printf("Informe o %i numero: ", i);
		scanf("%d", &num);

		if (num > maior) {
			maior = num;
			}
		else {
			menor = num;
		}

		i++;
	}
	

	printf("\nO maior numero informado foi: %d", maior);
	printf("\nO menor numero informado foi: %d", menor);

	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
}