#include "stdio.h"

int main()
{
	int num = 0;

	printf("Programa que Informa se é divisivel por 3 e 7");
	printf("\n Informe um numero inteiro: ");
	scanf("%d", &num);

	if ((num % 3 == 0) && (num % 7 == 0)) {
		printf("O numero %i e divisivel por 3 e 7", num);
		}
	else
	{
		printf("O numero %i nao e divisivel por 3 e 7", num);
	}

	getchar();
	getchar();
}