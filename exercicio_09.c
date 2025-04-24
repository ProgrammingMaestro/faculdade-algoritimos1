#include <stdio.h>
int main() {
	int numero = 0;
	printf("Digite um numero inteiro e eu direi se ele eh par ou impar\n");
	scanf("%d", &numero);
	if (numero % 2 == 0) {
		printf("%d eh Par\n", numero);
	} else {
		printf("%d eh Impar\n", numero);
	}
}