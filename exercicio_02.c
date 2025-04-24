#include <stdio.h>
int main() {
	float altura;
	char genero;
	float mediaNacionalMasculina = 1.73;
	float mediaNacionalFeminina = 1.6;
	printf("Altura: ");
	scanf("%f", &altura);
	printf("Genero (M/F): \n");
	scanf("%s", &genero);
	if (genero == 'M') {
		if (altura >= mediaNacionalMasculina) {
			printf("Altura acima da media media nacional\n");
		} else {
			printf("Altura abaixo da media nacional\n");
		}
	}
	if (genero == 'F') {
		if (altura >= mediaNacionalMasculina) {
			printf("Altura acima da media media nacional\n");
		} else {
			printf("Altura abaixo da media nacional\n");
		}
	}
}