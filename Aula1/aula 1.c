#include <stdio.h>
#include<math.h>

#define ratiopolegadas 2.54

int main(){
	int a = 3, b = 11, c = 2, d = 1;
	float resultado = 0;
	
	//1.1
	resultado = ((float)a / b) + 1; //tem q ser float para dar 1,22 , senao dava 1,00
	printf("(a / b)+1 = %.2f\n", resultado);
	
	//1.2
	resultado = (float) a + b/ (c-d);
	printf("(a + b) / (c - d) = %2.f\n", resultado);
	
	//1.3 
	resultado = (a + (b / c)) / (d - (b / c));
	printf("(a + (b / c)) / (d - (b / c)) = %.2f\n ", resultado);
	
	//1.6
	int a1 = 3, b1 = 11, c1 = 2 , d1 = 1 ;
	//^ <- apenas funciona entre inteiros
	resultado = (a1+ b1) ^(c1*d1);
	resultado = pow( a + b, c * d);
	
	//desenhe um algoritmo que leia valores de mediçoes feitas em polegadas e os converta para centimetros. 1polegada=2.54 cm
	float polegadas = 0, cm =0;
	
	printf ("Insira as polegadas:");
	scanf ("%f", &polegadas);
	
	cm = polegadas * ratiopolegadas ;
	printf("o valor e %.2f\n", cm);
	
	//ex 8
	//Desenhe um algoritmo que faça a classificação qualitativa de uma nota de um aluno segundo os
//seguintes níveis:
//0 <= nota < 5 Péssimo
//5 <= nota < 8 Mau
//8 <= nota < 10 Insuficiente

int nota= 6 ;

if (nota> = 0 && nota < 5) {


	printf("pessimo");
		}		
	else if( nota >= 5 && nota < 8);
	
	
	
	
	
	//ex9- desenhe um algoritmo que mediante a introduçao atraves do teclado de um inteiro designativo do mes do ano (1 a 12) apresente no ecra o nome desse mes
	
	int mes ;
	printf("insira o numero do mes");
	scanf("%d", &mes);
	
	switch ( mes )
		{
		case 1:
		
			printf("janeiro");
		break;
		case 2:
			printf("fevereiro");
 		break;
 		case 3 : 
 			printf("março");
		break;
		// continuar......
		default:
			printf("valor invalido");
		break;
		
		
		//ciclos
	
		int i = 0;
while ( i<10)
		{
			printf("o valor e: %.f\n", i);
			i++;
			
		}
		
		do
		{
			printf("o valor e: %.f\n", i);
			i++;
		} while( i < 10);
			 }




//ex 10

	int valor = 0, soma_numeros = 0, contador_numeros = 0;

	printf("Insira um conjunto de numeros: \n ");
	printf("Insira 0 para calcular a media");

do {

	scanf("%d\n", &valor);
	//	adicionar o valor ao total de numeros inseridos
	soma_numeros = soma_numeros + valor;
	//incrementar o contador de numeros
	contador_numeros ++;
	} while(valor !=0);
	float media= (float)soma_numeros / contador_numeros;
	printf("a media é : %.2f", media);
}


