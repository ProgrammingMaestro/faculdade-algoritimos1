/*
Esse algoritimo pede por um numero inteiro ao usuario e verifica se ele é divisivel sem resto (modulo) por 2. 
Então se ele for, imprime que o numero é par, se não for, então imprime que o numero é impar
*/
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