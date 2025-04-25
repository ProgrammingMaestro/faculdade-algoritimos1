/*
Esse algoritimo pede ao usuario dois numeros tipo int e depois verifica se a soma deles é maior ou igual a 10 
e imprime adequandamente se essa soma for maior ou igual a 10 ou então menor que dez
*/
#include <stdio.h>
int main() {
	int a, b;
	printf("Digite 2 numeros:\n");
	scanf("%d %d", &a, &b);
	int soma = a + b;
	if (soma >= 10) {
		printf("A soma desses numeros eh maior ou igual a 10\n");
	} else if (soma < 10) {
		printf("A soma desses numeros eh menor que dez\n");
	}
}