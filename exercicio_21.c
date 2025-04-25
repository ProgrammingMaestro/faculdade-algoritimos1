/*
Esse algoritimo pede para o usuario dois numeros inteiros. Depois imprime o valor da divisão deles.
E então, checa se o modulo por 2 dessa divisão for diferente de 0, se isso for verdadeiro então a divisão resulta em Impar,
se for falso a divisão resulta em Par.
*/
#include <stdio.h>
// 21- crie um algoritmo que receba 2 números inteiros e realize um divisão. Em
// seguida informe se o resto dessa divisão é ímpar e imprima isso na tela.
int main() {
    int a, b;
    printf("escolha dois numeros inteiros");
    scanf("%d %d", &a, &b);
	printf("%d\n", (a/b));
	if ((a/b)%2 != 0) {
		printf("a divisao eh IMPAR\n");
	}
	else {
		printf("a divisao eh PAR\n");
	}
}