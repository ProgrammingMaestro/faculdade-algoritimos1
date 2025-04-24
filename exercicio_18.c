#include <stdio.h>
int main() {
	char letra;

	printf("Digite a letra 'o' ou 'e': \n");
	scanf(" %c", &letra);

	if (letra == 'o' || letra == 'O') {
		printf("e");
	} else if (letra == 'e' || letra == 'E') {
		printf("o");
	} else {
		printf("Voce nao digitou nem 'o' nem 'e'.\n");
	}
}