#include "stdio.h"
#include "math.h"

int main()
{
	float Num, Square, RSquare = 0;

	printf("Infome um numero inteiro: ");
	scanf("%f", &Num);
	Square = Num*Num;
	RSquare = sqrt(Num);
	
	printf("O quadrado do numero é: %f\n", Square);
	printf("A raiz quadrada do numero é: %f", RSquare);
	
	getchar();
	getchar();

	return (0);
}