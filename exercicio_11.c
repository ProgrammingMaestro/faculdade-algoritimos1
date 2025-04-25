/*
Esse algoritimo pede por dois numeros, que devem ser inteiros, para uma divisão, checa se o usuario esta tentando dividir por zero,
e se o segundo numero não for zero ele checa se a divisão desses numeros é inteira ou quebrada e imprime adequadamente qual dessas
condições a divisão escolhida se enquadra
*/
#include <stdio.h>
int main() {
	int a, b;
	printf("Escolha dois numeros para uma divisao\n");
	scanf("%d %d", &a, &b);
	if (b == 0) {
		printf("Impossivel dividir por zero\n");
	} else if (a % b == 0) {
		printf("Resultado da divisao inteira eh: %d\n", (a / b));
	} else {
		printf("A divisao nao resulta em um numero inteiro.\n");
	}
}