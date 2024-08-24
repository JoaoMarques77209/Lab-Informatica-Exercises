#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//12. Escreva um algoritmo que calcule o valor da função 1,52x2+5 para todos os valores de x
//pertencentes ao intervalo [-1, 1] e com incrementos de 0,4. Utilize uma função no seu
//programa.

void main(void)
{
float x = -1, resultado = 0.0f;

//resultado = (1.52 * x ^ 2) +5;

for ( x= -1; x < 1; x = x + 0.4f)
{
	resultado = 1.52 * pow(x,2)+ 5 ;
	printf("f( %.1f) = (1.52 * x ^ 2) + 5 = %.2f \n", x, resultado);  //é %.1f é pq so queremos uma casa decimal
}

}
