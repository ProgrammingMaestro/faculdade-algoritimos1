/*
Esse daqui � meio complicado, esse algoritimo calcula a sequencia de fibonacci utilizando memoiza�ao. primeiro definimos um array de tipo long int
com 1000 espa�os de memoria. depois temos duas fun��es de ajuda e a fun��o principal onde o nosso programa come�a pedindo ao usuario por um numero
de posi��o da sequencia, depois disso o algoritimo inicializa a memoria do array memo para ser preenchido por -1, isso � importante para verificar
se j� temos um resultado na posi��o que a gente quer acessar. depois disso ele entra em um la�o de repeti��o que vai rodar n vezes, sendo n o n�mero
que o usuario escolheu, onde dentro de cada loop vai chamar a fun��o fibonacci(i) com index i.
Agora por ultimo dentro da fun��o fibonacci ele checa se n � menor ou igual a 1 e retorna n j� que os primeiros dois numeros da sequencia sempre ser�o
0 e 1. Ent�o ele checa se no nosso array a posi��o de numero n j� existir, ou seja, for diferente de -1 e se isso for verdade retorna o valor dessa posi��o.
Ent�o, se esse check falhar nos iremos atribuir um valor a essa possi��o, memo[n] � igual ao resultado da minha fun��o fibonacci anterior ou seja n - 1 mais
o numero anterior ao anterior que seria n - 2. Aqui que o check se a memoria � -1 � importante porque ao inves de recursivamente chamar a fun��o desde o 0
todas as vezes que ele quiser calcular o proximo n�mero nossa fun��o checa se naquele lugar da memoria tem um valor valido e apenas retorna esse valor, sem 
a necessidade de realizar o calculo novamente. E assim ele continua at� chegar no resultado, por�m. � possivel ocorrer um integer overflow ou um buffer overflow caso
os valores forem muito grandes ent�o nesse caso como n�o alocamos memoria dinamicamente durante o programa � melhor permanecer dentro de numeros n�o t�o grandes assim.
*/
#include <stdio.h>

long int memo[1000];
void inicializarMemoria() {
	for (int i = 0; i < 1000; i++) {
		memo[i] = -1;
	}
}

long int fibonacci(int n) {
	if (n <= 1) {
		return n;
	}

	if (memo[n] != -1) {
		return memo[n];
	}

	memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
	return memo[n];
}

int main() {
	int n;
	printf("Digite a posicao n da sequencia de Fibonacci: ");
	scanf("%d", &n);

	inicializarMemoria();
	for (int i = 0; i <= n; i++) {
		printf("Fibonacci(%d) = %ld\n", i, fibonacci(i));
	}
}