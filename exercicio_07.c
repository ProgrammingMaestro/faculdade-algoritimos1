/*
Esse algoritimo pede por dois pares de numeros inteiros, depois faz a soma de cada um dos pares, checa para ver se a soma do segundo par é diferente de zero, pois,
não é possivel dividir por zero, então, se a soma2 for diferente de 0 o algoritimo imprime o resultado da divisão entre a soma1 e soma2.
*/
#include <stdio.h>
int main() {
	int a, b, c, d;
	printf("Digite os primeiros dois numeros inteiros\n");
	scanf("%d %d", &a, &b);
	printf("Digite mais dois numeros inteiros\n");
	scanf("%d %d", &c, &d);
	float soma1 = a + b;
	float soma2 = c + d; //Nao deve, mas pode ser zero
	if (soma2 != 0) {
		printf("A divisao entre o resultado da soma dos pares eh: %.2f \n", (soma1/soma2));
	} else if (soma2 == 0) {
		printf("Impossivel dividir por zero");
	}
}