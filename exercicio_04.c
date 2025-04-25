/*
Esse algoritmo pede para o usuario duas datas em anos aonde ele checa para ter certeza que a primeira data deve ser menor que a segunda data.
Após, ele entra em um for loop aonde ele vai executar desde o ano1 até o ano2 e vai imprimir no terminal o ano que ele está nesse exato momento
caso ele for um ano bisexto. Então ele termina o programa avisando que imprimiu todos os anos bissextos entre as datas escolhidas.
A condição para ser ano bissexto é que o ano é divisivel por 4 sem ter resto e NÃO é divisivel por 100, a menos que seja divisivel, sem resto, por 400.
*/
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