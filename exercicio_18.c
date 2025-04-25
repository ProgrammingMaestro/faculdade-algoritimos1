/*
Esse algoritimo pede que o usuario digite a letra 'o' ou a letra 'e'.
Se o usuario digitar uma dessas letras o algoritimo imprime a outra letra que 
o usuario não digitou. Caso ele não tenha digitado nem a letra 'o' e nem a letra 'e'.
O algoritimo imprime que foi isso que aconteceu e o programa acaba.
*/
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