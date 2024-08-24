#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int ano;

	printf("introduza o ano:\n");
	scanf("%d", &ano);

	if ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0)))
		printf("ano %d eh bissexto!\n", ano);
	else
		printf("ano %d nao eh bissexto!\n", ano);
}