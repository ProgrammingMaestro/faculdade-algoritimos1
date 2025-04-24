#include <stdio.h>
int main() {
	int ano1 = 0, ano2 = 0;
	printf("Escolha duas datas em anos\nDigite o primeiro ano:\n");
	scanf("%d", &ano1);
	printf("Digite o segundo ano:\n");
	scanf("%d", &ano2);
	if (ano1 >= ano2) {
		printf("Desculpe, a primeira data deve ser menor que a segunda\n");
		main();
	}
	for (int i = ano1; i <= ano2; i++) {
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
			//tive que verificar na internet como fazer esse check de ano bissexto
			//https://docs.vultr.com/python/examples/check-leap-year
			printf("%d\n", i);
		}
	}
	printf("Esses sao todos os anos bisextos entre as datas escolhidas\n");
}