#include "stdio.h"
#include "string"

int main()
{
	char outro[50];

	printf("Informe uma palavra: ");
	scanf("%s", outro);

	int quant;
	
	quant = 0;

	for (int i = 0; i < strlen(outro); i++)
	{
		if (outro[i] == 'i' || outro[i] == 'I' || outro[i] == 'e' || outro[i] == 'E' || outro[i] == 'o' || outro[i] == 'O' || outro[i] == 'u' || outro[i] == 'U' || outro[i] == 'a' || outro[i] == 'A')
		{
			quant++;
		}
	}

	printf("Quantidade e: %i", quant);

	getchar();
	getchar();

	return(0);
}