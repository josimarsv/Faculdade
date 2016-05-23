#include "stdio.h"

int main()
{
	int N1 = 0, N2 = 0, N3 = 0, N4 = 0;
	int media = 0;

	printf("Informe os 4 numeros para calculo da media, N1 N2 N3 N4: ");
	scanf("%i", &N1);
	scanf("%i", &N2);
	scanf("%i", &N3);
	scanf("%i", &N4);

	media = (N1 + N2 + N3 + N4) / 4;

	printf("A media é: %.2i", media);

	getchar();
	getchar();

	return (0);

}