#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//ciclos
void media(void)
{
//10. Desenvolva um algoritmo que vá lendo do teclado uma sequência de valores reais cuja marca de
//fim é o valor 0 (zero). O programa deverá calcular a média de todos os valores negativos lidos.

float valor_inserido = 0.0f;
float soma_valores = 0.0f;
int contador_valores_inseridos = 0;

do {
printf("Insira um valor para calcular a media(ou 0 para sair)");
scanf("%F", valor_inserido);
if (valor_inserido != 0)
{
//acomula o valor inserido
soma_valores = soma_valores + valor_inserido;
//soma_valores + = valor_inserido;
contador_valores_inseridos ++;
}

} while ( valor_inserido != 0);      //!=significa diferente
// if (contador_valores)

float media = 0.0f;

media = soma_valores / contador_valores_inseridos;
printf( "A media e: %f", media);
////inacabado

}



