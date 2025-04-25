/*
Esse algoritimo pede pela data de nascimento do usuario (em anos) depois calcula aproximadamente a idade em meses
dessa pessoa ao multiplicar a quantidade de anos por 12 (quantidade de meses em um ano).
*/
#include <stdio.h>
int main() {
	int anoNascimento, idadeAnos, idadeMeses;
	int anoAtual = 2025;

	printf("Digite seu ano de nascimento: ");
	scanf("%d", &anoNascimento);

	idadeAnos = anoAtual - anoNascimento;
	idadeMeses = idadeAnos * 12;

	printf("Voce tem aproximadamente %d meses de idade.\n", idadeMeses);
}