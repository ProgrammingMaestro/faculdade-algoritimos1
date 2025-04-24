#include <stdio.h>
int main() {
	float r1, r2, req;

	printf("Digite o valor da resistC*ncia R1: ");
	scanf("%f", &r1);

	printf("Digite o valor da resistC*ncia R2: ");
	scanf("%f", &r2);

	if (r1 != 0 && r2 != 0) {
		req = ((r1 * r2) + (r1 + r2));
		printf("Resistencia equivalente: %.2f ohms\n", req);
	} else {
		printf("Nenhuma das resistC*ncia pode ser zero.\n");
	}
}