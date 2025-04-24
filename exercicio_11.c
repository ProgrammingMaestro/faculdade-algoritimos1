#include <stdio.h>
int main() {
	int a, b;
	printf("Escolha dois numeros para uma divisao\n");
	scanf("%d %d", &a, &b);
	if (a == 0) {
		printf("Impossivel dividir por zero\n");
	} else if (a % b == 0) {
		printf("Resultado da divisao inteira eh: %d\n", (a / b));
	} else {
		printf("A divisao nao resulta em um numero inteiro.\n");
	}
}