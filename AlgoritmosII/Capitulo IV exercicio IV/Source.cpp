#include "stdio.h"

int main()
{
	char palavra[30];
	int num = 0;

	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	printf("Informe o numero de vezes para imprimi-la: ");
	scanf("%i", &num);

	for (int i = 0; i < num; i++)
	{
		printf("%s\n", palavra);
	}

	getchar();
	getchar();
	getchar();
}