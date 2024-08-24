#define _CRT_SECURE_ND_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()

{
	int dia;
	time_t t;

	srand((unsigned)time_t(&t));
	dia = rand() % 7 + 1;
	printf("%d\n", dia);

	switch (dia) {
	case 1: printf("domingo\n");
		break;
	case 2: printf("segunda-feira\n");
		break;
	case 3: printf("terca-feira\n");
		break;
	case 4: printf("quarta-feira\n");
		break;
	case 5: printf("quinta-feira\n");
		break;
	case 6: printf("sexta-feira\n");
		break;
	case 7: printf("sabado\n");
		break;
	default: printf("o numero eh invalido!\n");

	}


}