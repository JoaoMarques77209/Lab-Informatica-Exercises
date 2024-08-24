#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()

{
	float nota;
	int num_alunos = 0;

	for (int i = 0;i < 1; i++) {
		printf("introduza nota de aluno %d;\n", i + 1);
		scanf("%f",&nota);
		if (nota >= 9.5)
			num_alunos++;

	}
	printf(" yui!\n", nota);
	printf("passaram %d alunos!\n", num_alunos);


}