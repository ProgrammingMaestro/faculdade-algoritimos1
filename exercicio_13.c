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