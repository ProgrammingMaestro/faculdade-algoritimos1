// Juan Carlos de Sousa Lopes
// juan.lopes3@estudante.ifms.edu.br
// Instituto Federal de Ciencia e Tecnologia do Mato Grosso do Sul Campus Três
// Lagoas 22/04/2025 Engenharia de Computação Algoritimos I

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
// 1- Crie um algoritmo que identifica se o valor dado é um triângulo se for o
// algoritmo deve mostra se ele é equilátero, isósceles ou escaleno usando
// print, scanf, if e else
void exercicio01() {
    float ladoA = 0;
  float ladoB = 0;
  float ladoC = 0;
  printf("Escolha 3 valores para os lados de um triangulo\n");
  scanf("%f", &ladoA);
  scanf("%f", &ladoB);
  scanf("%f", &ladoC);
 
  if(((ladoA > abs(ladoB - ladoC)) && (ladoA < (ladoB + ladoC))) &&
     ((ladoB > abs(ladoA - ladoC)) && (ladoB < (ladoA + ladoC))) &&
     ((ladoC > abs(ladoA - ladoB)) && (ladoC < (ladoA + ladoB))))
    {
    printf("Eh um triangulo\n");
    if ((ladoA == ladoB) && (ladoB == ladoC))
      {
      printf("Esse triangulo eh Equilatero\n");
      }
    if ((ladoA == ladoB && ladoB != ladoC) ||
        (ladoA == ladoC && ladoB != ladoC) ||
        (ladoB == ladoC && ladoC != ladoA))
      {
      printf("Esse triangulo eh Isoceles\n");
      }
    if ((ladoA != ladoB) && (ladoB != ladoC) && (ladoA != ladoC))
      {
      printf("Esse triangulo eh Escaleno\n");
      }
    }
  else 
    {
    printf("Os valores nao formam um triangulo!\n");
    }
}
// 2- crie um algoritmo que identifique se a altura do usuário é maior ou menor
// da altura media nacional
void exercicio02() {
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
// 3- Considere um algoritmo que tenha como entrada 3 números inteiros chamados
// a, b, c
void exercicio03() {
    int a, b, c;
    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Voce digitou: %d, %d, %d\n", a, b, c);
}
// 4- faça um algoritmo que receba duas datas em anos cuja a primeira entrada
// tenha um valor inteiro menor que o segundo valor, o algoritmo deve mostrar os
// anos bissextos dentro do intervalo das duas entradas
void exercicio04() {
    int ano1 = 0, ano2 = 0;
    printf("Escolha duas datas em anos\nDigite o primeiro ano:\n");
    scanf("%d", &ano1);
    printf("Digite o segundo ano:\n");
    scanf("%d", &ano2);
    if (ano1 >= ano2) {
        printf("Desculpe, a primeira data deve ser menor que a segunda\n");
        exercicio04();
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

// 5- faça um algoritmo que receba a entrada de valores a, b, c que calcule a fórmula de bhaskara
void exercicio05(){
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

// 6- algoritmo que tenha entrada dois números inteiros que some e depois mostre o resultado
void exercicio06() {
    int a, b, soma;
    printf("Digite dois numeros inteiros para somar-los: ");
    scanf("%d %d", &a, &b);
    soma = a + b;
    printf("O resultado eh: %d\n", soma);


}
// 7- faça um código onde receba dois números inteiros e somar estes dois números após
// isso escrever mais dois números e somar eles e dividir o priemeiro resultado pelo segundo
void exercicio07() {
    int a, b, c, d;
    printf("Digite os primeiros dois numeros inteiros\n");
    scanf("%d %d", &a, &b);
    printf("Digite mais dois numeros inteiros\n");
    scanf("%d %d", &c, &d);
    float soma1 = a + b;
    float soma2 = c + d; //Nao deve, mas pode ser zero
    if (soma2 != 0) {
    printf("A divisao entre o resultado da soma dos pares eh: %.2f \n", (soma1/soma2));
    } else if (soma2 == 0) {
    printf("Impossivel dividir por zero");
    }
}

// 8- escreva um algoritmo que peça o nome idade gênero e altura do usuário
void exercicio08() {
    char nome[50], genero[50];
    int idade;
    float altura;
    printf("Qual o seu nome:\n");
    scanf("%s", &nome);
    printf("Qual o seu genero (M | F):\n");
    scanf("%s", &genero);
    printf("Qual a sua idade:\n");
    scanf("%d", &idade);
    printf("Qual a sua altura (em metros):\n");
    scanf("%f", &altura);
    printf("Voce se chama %s, voce eh do genero %s, tem %d anos e %.2fm de altura\n", nome, genero, idade, altura);
}

// 9- desenvolva um algoritmo que receba um número inteiro e informe se ele é
// par ou ímpar
void exercicio09() {
    int numero = 0;
    printf("Digite um numero inteiro e eu direi se ele eh par ou impar\n");
    scanf("%d", &numero);
    if (numero % 2 == 0) {
        printf("%d eh Par\n", numero);
    } else {
        printf("%d eh Impar\n", numero);
    }
}

// 10- faça um cardápio que apareça no terminal por meio do printf com no mínimo 5 escolhas,
// e faça a opção de escolha das opções
void exercicio10() {
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
        exercicio10();
    }    
}

// 11- faça um algoritmo que insira dois números e que a divisão deles de um
// resultado que seja obrigatóriamente um número inteiro
void exercicio11(){
    int a, b;
    printf("Escolha dois numeros para uma divisao\n");
    scanf("%d %d", &a, &b);
    if (a == 0){
        printf("Impossivel dividir por zero\n");
    } else if (a % b == 0) {
        printf("Resultado da divisao inteira eh: %d\n", (a / b));
    } else {
        printf("A divisao nao resulta em um numero inteiro.\n");
    }
}

// 12- faça um algoritmo com uma variável tipo char e defina o número de letras
// que a pessoa pode escrever
void exercicio12() {
    char letra;
    char texto[6]; // define o limite de 5 letras +1 o '\0'
    printf("Digite no maximo 5 letras: ");
    scanf("%5s", texto); // le no máximo 5 caracteres
    printf("Voce digitou: %s\n", texto);
}

// 13- faça um algoritmo que colete a data de nascimento do usuário que devolva
// a sua idade em meses
void exercicio13() {
    int anoNascimento, idadeAnos, idadeMeses;
    int anoAtual = 2025;

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &anoNascimento);

    idadeAnos = anoAtual - anoNascimento;
    idadeMeses = idadeAnos * 12;

    printf("Voce tem aproximadamente %d meses de idade.\n", idadeMeses);
}
// 14- faça um algoritmo que declare dois valores reais e cinco carácteres
void exercicio14(){
    float valor1 = 3.14, valor2 = 7.25;
    char c1 = 'A', c2 = 'B', c3 = 'C', c4 = 'D', c5 = 'E';

    printf("Valores reais: %.2f, %.2f\n", valor1, valor2);
    printf("Caracteres: %c %c %c %c %c\n", c1, c2, c3, c4, c5);
}

// 15- crie um algoritmo que some 3 números inteiros e depois calcule a média
void exercicio15(int a, int b, int c) {
    int soma = a + b + c;
    printf("soma de a + b + c = %d\n", soma);
    printf("media de a, b e c = %.2f\n", (soma/3.0));
    }

// 16- crie um algoritmo que tenha como entrada as 3 dimensões de um algoritmo
// em metros
void exercicio16() {
    float comprimento, largura, altura;

    printf("Digite o comprimento (m):\n");
    scanf("%f", &comprimento);

    printf("Digite a largura (m):\n");
    scanf("%f", &largura);

    printf("Digite a altura (m):\n");
    scanf("%f", &altura);

    printf("Dimensões do objeto: %.2fm x %.2fm x %.2fm\n", comprimento, largura, altura);
}
// 17- faça um algoritmo que receba 5 números inteiros e retorne eles de forma
// ordenada e crescente
void exercicio17() {
    int nums[5], i, j, temp;

    printf("Digite 5 numeros inteiros:\n");
    for (i = 0; i <= 4; i++) {
        scanf("%d", &nums[i]);
    }

    // Insertion sort https://www.geeksforgeeks.org/insertion-sort-algorithm/
    int n = sizeof(nums) / sizeof(nums[0]);
    for (i = 0; i < n; i++) {
        int key = nums[i];
        int j = i - 1;
        while (j >= 0 && nums[j] > key) {
            nums[j + 1] = nums[j];
            j = j - 1;
        }
        nums[j + 1] = key;
        }

    printf("Numeros em ordem crescente: ");
    for (i = 0; i <= 4; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}
// 18- faça um algoritmo que responda o usuário quando ele digitar a vogal
// “o”com a vogal “e”
void exercicio18() {
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
// 19- faça um algoritmo que receba dois números reais e que a multiplicação
// deles retorne obrigatoriamente um número inteiro
void exercicio19() {
    float a, b;
    float resultado;

    printf("Digite dois numeros reais: ");
    scanf("%f %f", &a, &b);

    resultado = a * b;

    if ((int)resultado == resultado) {
        printf("Resultado inteiro: %.0f\n", resultado);
    } else {
        printf("A multiplicacao nao resultou em numero inteiro.\n");
    }
}
// 20- faça um algoritmo que recebe 3 carácteres que retorne eles em ordem
// alfabética
void exercicio20() {
    char a, b, c, temp;

    printf("Digite tres letras: ");
    scanf(" %c %c %c", &a, &b, &c);

    // Ordenação simples
    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }

    printf("Letras em ordem alfabetica: %c %c %c\n", a, b, c);
}

// 21- crie um algoritmo que receba 2 números inteiros e realize um divisão. Em
// seguida informe se o resto dessa divisão é ímpar e imprima isso na tela.
void exercicio21(int a, int b) {
    printf("%d\n", (a/b));
    if ((a/b)%2 != 0) {
        printf("a divisao eh IMPAR\n");
    }
    else {
        printf("a divisao eh PAR\n");
    }
}

// 22- faça um algoritmo que leia dois valores, esses valores são as resistência
// de dois resistores em paralelo e calcule a resistência equivalente entre eles
void exercicio22() {
    float r1, r2, req;

    printf("Digite o valor da resistência R1: ");
    scanf("%f", &r1);

    printf("Digite o valor da resistência R2: ");
    scanf("%f", &r2);

    if (r1 != 0 && r2 != 0) {
        req = ((r1 * r2) + (r1 + r2));
        printf("Resistencia equivalente: %.2f ohms\n", req);
    } else {
        printf("Nenhuma das resistência pode ser zero.\n");
    }
}
// 23- faça um algoritmo que calcule a sequencia de fibonacci ultilizando
// memoizacao.
long int memo[1000];
void initializeExercicio23() {
    for (int i = 0; i < 1000; i++) {
        memo[i] = -1;
    }
}
long int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    if (memo[n] != -1){
    return memo[n];
    }

    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return memo[n];
}
void exercicio23() {
    int n;
    printf("Digite a posicao n da sequencia de Fibonacci: ");
    scanf("%d", &n);

    initializeExercicio23();
    for (int i = 0; i <= n; i++){
    printf("Fibonacci(%d) = %ld\n", i, fibonacci(i));
    }
}
// 24 Crie um algoritmo que receba as seguintes informações de um cidadão:
// Idade, Sexo, Nacionalidade, Possui alguma deficiência grave? (Sim/Não). Com
// base nessas informações, o algoritmo deve informar se o cidadão está apto ou
// não apto ao alistamento militar obrigatório.
void exercicio24() {
    int idade;
    char sexo, nacionalidade, deficiencia;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu sexo (M/F): ");
    scanf(" %c", &sexo);

    printf("Voce eh brasileiro? (Y/N): ");
    scanf(" %c", &nacionalidade);

    printf("Possui alguma deficiencia grave? (Y/N): ");
    scanf(" %c", &deficiencia);

    if ((idade >= 18 && idade <= 45) && (sexo == 'M' || sexo == 'm') && (deficiencia == 'N' || deficiencia == 'n') && (nacionalidade == 'Y' || nacionalidade == 'y')) {
        printf("Voce esta apto ao alistamento militar obrigatorio.\n");
    } else {
        printf("Voce NAO esta apto ao alistamento militar obrigatorio.\n");
    }
}
// 25- crie um algoritmo que receba 6 números possíveis de um sorteio
void exercicio25() {
    int numeros[6];

    printf("Digite 6 numeros para o sorteio:\n");
    for (int i = 0; i < 6; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    int sorteio = rand() % 6;
    printf("Numero sorteado foi: ");
    printf("%d ", numeros[sorteio]);
    printf("\n");
}
// 26- faça um algoritmo que receba dois números inteiros e verifique se a soma
// deles é maior ou igual a 10
void exercicio26() {
    int a, b;
    printf("Digite 2 numeros:\n");
    scanf("%d %d", &a, &b);
    int soma = a + b;
    if (soma >= 10) {
        printf("A soma desses numeros eh maior ou igual a 10\n");
    } else if (soma < 10) {
        printf("A soma desses numeros eh menor que dez\n");
    }
}

// 27- escreva um algoritmo que receba um valor em float e retorne um inteiro
void exercicio27() {
    float a;
    printf("Digite um valor em float: ");
    scanf("%f", &a);
    printf("seu valor em inteiro eh: %d", (int)a);
}
// 28- faça um algoritmo que tenha como entrada um valor real
void exercicio28() {
    float valor;
    printf("Escreva um numero real: ");
    scanf("%f", &valor);
    printf("%f\n", valor);
    }

int main() {
    exercicio20();
    return 0;
}
