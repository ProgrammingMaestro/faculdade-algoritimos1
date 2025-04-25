/*
Esse algoritimo pede o valor de duas resistencias R1 e R2 para o usuario. depois checa se nenhum desses valores é zero,
caso algum desses valores NÃO forem diferentes de zero (sinonimo para, forem iguais a zero) então o algoritimo imprime que não podemos ter
alguma das resistencias como zero. Se as duas forem validas ele realiza o calculo para resistencias em paralelo: R1 * R2 / R1 + R2 e imprime
esse resultado.
*/
#include <stdio.h>
int main() {
	float r1, r2, req;

	printf("Digite o valor da resistencia R1: ");
	scanf("%f", &r1);

	printf("Digite o valor da resistencia R2: ");
	scanf("%f", &r2);

	if (r1 != 0 && r2 != 0) {
		req = ((r1 * r2) + (r1 + r2));
		printf("Resistencia equivalente: %.2f ohms\n", req);
	} else {
		printf("Nenhuma das resistencia pode ser zero.\n");
	}
}