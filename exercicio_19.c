/*
Esse algoritimo pede por dois numeros reais ao usuario, multiplica eles e coloca numa variavel resultado, depois usando um cast para int
verifica se esse cast para int é igual ao resultado original. Se ele for, então nosso resultado é inteiro e o algoritimo imprime que o resultado
é inteiro, caso não for ele imprime que o resultado não é inteiro.
*/
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