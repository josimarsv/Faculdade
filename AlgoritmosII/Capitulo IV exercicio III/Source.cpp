#include "stdio.h"
#include "string"

int main()
{
	char palavr[40];

	printf("Escreva uma palavra: ");
	scanf("%s", palavr);

	int tamanho = strlen(palavr);

	if (tamanho % 2 == 1)
	{
		for (int i = 0; i < tamanho; i++)
		{
			if (palavr[i] != 'a' && palavr[i] != 'e' && palavr[i] != 'i' && palavr[i] != 'o' && palavr[i] != 'u')
			{
				printf("%c", palavr[i]);
			}
		}
	}

	getchar();
	getchar();
	getchar();

}