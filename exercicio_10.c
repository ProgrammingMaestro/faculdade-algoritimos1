#include <stdio.h>
int main() {
	int escolha = 0;
	printf("########## Cardapio legal ##########\n");
	printf("Opcoes:\n");
	printf("1. Frango a Milanesa\n2. Tilapia Empanada\n3. Bife a Cavala\n4. Steak de Filet Mingnon\n5. Fraldinha com Batata\n\n");
	printf("Escolha alguma das opcoes acima (1-5)\n");
	scanf("%d", &escolha);
	if (escolha <= 5 && escolha >= 1) {
		switch (escolha) {
		case 1:
			printf("Obrigado por escolher o Frango a Milanesa, seu pedido estara pronto em breve\n");
			break;

		case 2:
			printf("Obrigado por escolher a Tilapia Empanada, seu pedido estara pronto em breve\n");
			break;

		case 3:
			printf("Obrigado por escolher o Bife a Cavala, seu pedido estara pronto em breve\n");
			break;

		case 4:
			printf("Obrigado por escolher o Steak de Filet Mingnon, seu pedido estara pronto em breve\n");
			break;

		case 5:
			printf("Obrigado por escolher a Fraldinha com Batata, seu pedido estara pronto em breve\n");
			break;

		default:
			break;
		}
	} else {
		printf("Desculpe, nao entendi o que voce pediu poderia pedir novamente? (digite qualquer numero para recomecar)\n");
		scanf("%d");
		main();
	}
}