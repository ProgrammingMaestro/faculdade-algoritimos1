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