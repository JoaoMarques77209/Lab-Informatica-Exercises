#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
	

//14. Faça o algoritmo de um programa que leia um vector de N elementos e que determine o valor
//máximo, o valor mínimo e calcule a média de todos os elementos do vector. Utilize as seguintes
//funções no seu algoritmo:
//- Para ler o vector de N elementos;
//- Para determinar o valor máximo;
//- Para determinar o valor mínimo;
//- Para calcular a média.

int i;

int maior, menor;

int vetor[N];

int soma_valores;

float media= 0.0f;

int contador_pares;

for (i = 0 ; i < N; i++)

{

printf("Insira o valor: ");

scanf("%d", &vetor [i]);
 
}

// inicializar a variável

maior = vetor[0];
menor = vetor[0];
soma_valores= 0;


// contar pares

if (vetor[0] % 2 == 0)
{ 
contador_pares++;
}

for (i=0; i < N; i++)

{

if (maior < vetor[i]) // se a variavel maior for menor que a posicao atual
{

   maior = vetor[i]; // guardar o novo
   
}

if (menor > vetor[i])

{
	menor = vetor[i];
}
 soma_valores= soma_valores + vetor[i];
 
 if (vetor[i] % 2 == 0)
{ 
contador_pares++;
}

} // fim ciclo

printf("O valor maior e: %d \n", maior);
printf("O valor menor e: %d \n", menor);
printf("Sao %d pares \n", contador_pares);


media = (float) soma_valores / N ;

printf("A media e: %.2f ", media);


system("pause");
return 0;
}
