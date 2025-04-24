#include <stdio.h>
int main() {
	float a, b;
	float resultado;

	printf("Digite dois numeros reais: ");
	scanf("%f %f", &a, &b);

	resultado = a * b;

	if ((int)resultado == resultado) {
		printf("Resultado inteiro: %.0f\n", resultado);
	} else {
		printf("A multiplicacao nao resultou em numero inteiro.\n");
	}
}