/*
Esse algoritimo pede ao usuario que digite 6 numeros que vão estar em um array. Depois, utilizando a função rand() da biblioteca padrão de c (stdlib.h)
ele randomiza um numero de 0 a 6 e depois acessa esse index do array numeros e imprime qual é o numero naquela posição, efetivamente fazendo um sorteio com os 6 numeros 
*/
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