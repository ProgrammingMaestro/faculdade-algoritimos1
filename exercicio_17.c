/*
Esse algoritimo pede para o usuario digitar cinco numeros inteiros para colocar em um array atraves de um la�o de repeti��o.
Depois utiliza um algoritimo de ordena��o por inser��o[*] para ordenar os valores desse array e depois usa um outro la�o de repeti��o
para imprimir os valores desse array por�m ordenados

[*] O algoritimo de Insertion Sort foi explicado para mim assim, Tendo cartas de baralho na m�o eu vou checar nesse caso da esquerda para a
direita, o segundo elemento que � o que estou checando agora (i). e checo o elemento anterior (j), e se ele for maior que o meu elemento atual
eu troco eles de lugar, e assim vai para todos os elementos do array at� chegar no final.
*/
#include <stdio.h>
int main() {
	int nums[5], i, j, temp;

	printf("Digite 5 numeros inteiros:\n");
	for (i = 0; i <= 4; i++) {
		scanf("%d", &nums[i]);
	}

	// Insertion sort https://www.geeksforgeeks.org/insertion-sort-algorithm/
	int n = sizeof(nums) / sizeof(nums[0]);
	for (i = 0; i < n; i++) {
		int key = nums[i];
		int j = i - 1;
		while (j >= 0 && nums[j] > key) {
			nums[j + 1] = nums[j];
			j = j - 1;
		}
		nums[j + 1] = key;
	}

	printf("Numeros em ordem crescente: ");
	for (i = 0; i <= 4; i++) {
		printf("%d ", nums[i]);
	}
	printf("\n");
}