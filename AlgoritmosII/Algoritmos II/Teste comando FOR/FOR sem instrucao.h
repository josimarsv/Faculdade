#pragma once
#include "stdio.h"
#include "conio.h"
#include "string"
#include "stdio.h"

int prompt(void);
int readnum(void);
int sqrnum(int);

int forsin()
{
	int t;

	for (prompt(); t = readnum(); prompt())
		sqrnum(t);

	getchar();
	getchar();
	return (0);
}

int prompt(void)
{
	printf("Digite um numero: ");
	return 0;
}

int readnum(void)
{
	int t;
	scanf("%d", &t);
	return t;
}

int sqrnum(int num)
{
	printf("%d\n", num*num);
	return num*num;
}