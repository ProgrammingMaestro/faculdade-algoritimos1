#include <stdio.h>
#include <stdlib.h>
int main() {
	int numeros[6];

	printf("Digite 6 numeros para o sorteio:\n");
	for (int i = 0; i < 6; i++) {
		printf("Numero %d: ", i + 1);
		scanf("%d", &numeros[i]);
	}
	int sorteio = rand() % 6;
	printf("Numero sorteado foi: ");
	printf("%d ", numeros[sorteio]);
	printf("\n");
}