#include <stdio.h>
int main() {
	int a, b, soma;
	printf("Digite dois numeros inteiros para somar-los: ");
	scanf("%d %d", &a, &b);
	soma = a + b;
	printf("O resultado eh: %d\n", soma);
}