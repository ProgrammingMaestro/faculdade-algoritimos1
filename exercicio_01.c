/*
Esse algoritomo primeiro pede ao usuario para inserir o valor de tr�s lados de um triangulo.
Ap�s isso ele verifica se esses valores formam algum triangulo usando a condi��o de existencia 
para triangulos. Ent�o, ele checa se todos os lados s�o iguais para verificar se � um triangulo equilatero
depois checa se dois lados s�o iguais por�m o terceiro lado diferente para a existencia do triangulo isoceles
Por fim, se todos os lados desse triangulo forem diferentes ele � um Triangulo Escaleno.
*/
#include <stdio.h>
#include <math.h>
int main()
{
	float ladoA = 0;
	float ladoB = 0;
	float ladoC = 0;
	printf("Escolha 3 valores para os lados de um triangulo\n");
	scanf("%f", &ladoA);
	scanf("%f", &ladoB);
	scanf("%f", &ladoC);

	if(((ladoA > abs(ladoB - ladoC)) && (ladoA < (ladoB + ladoC))) &&
	        ((ladoB > abs(ladoA - ladoC)) && (ladoB < (ladoA + ladoC))) &&
	        ((ladoC > abs(ladoA - ladoB)) && (ladoC < (ladoA + ladoB)))) {
		printf("Eh um triangulo\n");
		
		if ((ladoA == ladoB) && (ladoB == ladoC)) {
			printf("Esse triangulo eh Equilatero\n");
		}
		
		if ((ladoA == ladoB && ladoB != ladoC) ||
		        (ladoA == ladoC && ladoB != ladoC) ||
		        (ladoB == ladoC && ladoC != ladoA)) {
			printf("Esse triangulo eh Isoceles\n");
		}
		
		if ((ladoA != ladoB) && (ladoB != ladoC) && (ladoA != ladoC)) {
			printf("Esse triangulo eh Escaleno\n");
		}
	}
	else {
		printf("Os valores nao formam um triangulo!\n");
	}
}