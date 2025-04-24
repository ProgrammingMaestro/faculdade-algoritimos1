#include <stdio.h>

long int memo[1000];
void inicializarMemoria() {
	for (int i = 0; i < 1000; i++) {
		memo[i] = -1;
	}
}

long int fibonacci(int n) {
	if (n <= 1) {
		return n;
	}

	if (memo[n] != -1) {
		return memo[n];
	}

	memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
	return memo[n];
}

int main() {
	int n;
	printf("Digite a posicao n da sequencia de Fibonacci: ");
	scanf("%d", &n);

	inicializarMemoria();
	for (int i = 0; i <= n; i++) {
		printf("Fibonacci(%d) = %ld\n", i, fibonacci(i));
	}
}