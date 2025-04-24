#include <stdio.h>
#include <math.h>
int main() {
	float a, b, c, x1, x2, delta;
	printf("Bhaskara- Entre os valores para a, b, c:\n");
	scanf("%f %f %f", &a, &b, &c);
	delta = b * b - 4 * a * c;
	if (delta < 0) {
		printf("Raizes nao reais\n");
	} else if (delta == 0) {
		x1 =  (-b + sqrt(delta))/(2 * a);
		printf("Unica Raiz: %f\n", x1);
	} else {
		x1 = (-b + sqrt(delta))/(2 * a);
		x2 = (-b - sqrt(delta))/(2 * a);
		printf("Raizes: {%.4f, %.4f} Delta: %f", x1, x2, delta);
	}
}