#include "stdio.h"
#include "stdlib.h"

void main()
{
	int magic;
	int guess;

	magic = rand();

	printf("num: ");
	scanf("%d", &guess);

	printf("%i", magic);
	if (guess == magic) printf("***deu certo***");
	else printf("deu errado");
	getchar();
	getchar();

}
