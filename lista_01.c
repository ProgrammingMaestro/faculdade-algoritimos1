#include <stdio.h>
#include <math.h>

void linha() {
    printf("\n");
}
struct Ponto {
    float x;
    float y;
};

// 1 - Considere um algoritmo que tem como entrada 2 pontos do plano cartesiano
void exercicio1() {

    struct Ponto ponto1;
    struct Ponto ponto2;

    ponto1.x = 1.0;
    ponto1.y = 2.0;
    ponto2.x = 4.0;
    ponto2.y = 6.0;

    printf("Exercicio 1:\n");
    printf("Ponto 1: (%.1f, %.1f)\n", ponto1.x, ponto1.y);
    printf("Ponto 2: (%.1f, %.1f)\n", ponto2.x, ponto2.y);
    linha();
}

// 2 - Considere um algoritmo que processe 3 numeros inteiros chamados de A B C
void exercicio2() {
    int A = 5;
    int B = 10;
    int C = 15;
    int soma = A + B + C;
    int produto = A * B * C;
    float media = (float)(A + B + C) / 3;

    printf("Exercicio 2:\n");
    printf("A = %d, B = %d, C = %d\n", A, B, C);
    printf("Soma: %d\n", soma);
    printf("Produto: %d\n", produto);
    printf("Media: %.2f\n", media);
    linha();
}

// 3 - Considere um algoritmo de idade em meses, anos e dias
void exercicio3() {
    int anos = 25;
    int meses = 6;
    int dias = 15;

    printf("Exercicio 3:\n");
    printf("Idade: %d anos, %d meses e %d dias\n", anos, meses, dias);
    linha();
}

// 4 - Considere um algoritmo que converte idade de dias para anos, meses e dias
void exercicio4() {
    int total_dias = 9125;  // Exemplo: 25 anos em dias
    int anos, meses, dias;

    anos = total_dias / 365;

    total_dias = total_dias % 365;
    meses = total_dias / 30;
    dias = total_dias % 30;

    total_dias = anos * 365 + meses * 30 + dias;

    printf("Exercicio 4:\n");
    printf("Total de dias: %d\n", total_dias);
    printf("Equivale a: %d anos, %d meses e %d dias\n", anos, meses, dias);
    linha();
}

// 5 - Considere um algoritmo que tem de entrada 3 notas de estudantes
void exercicio5() {
    float nota1 = 7.5;
    float nota2 = 8.0;
    float nota3 = 6.5;
    float media;

    media = (nota1 + nota2 + nota3) / 3;

    printf("Exercicio 5:\n");
    printf("Notas: %.1f, %.1f, %.1f\n", nota1, nota2, nota3);
    printf("Media: %.2f\n", media);

    //Printa se ele/ela foi aprovado ou não
    if (media >= 7.0) {
        printf("Situacao: Aprovado\n");
        linha();
    }
    else {
        printf("Situacao: Reprovado\n");
        linha();
    }
}

// 6 - Algoritmo que lê 3 valores reais
void exercicio6() {
    float valor1 = 10.5, valor2 = 20.7, valor3 = 15.3;
    float soma, produto;

    soma = valor1 + valor2 + valor3;
    produto = valor1 * valor2 * valor3;

    printf("Exercicio 6:\n");
    printf("Valores: %.1f, %.1f, %.1f\n", valor1, valor2, valor3);
    printf("Soma: %.2f\n", soma);
    printf("Produto: %.2f\n", produto);
    linha();
}

// 7 - Algoritmo com entrada de 2 valores inteiros
void exercicio7() {
    const int num1 = 15, num2 = 7;
    int soma, subtracao, produto, quociente, resto;

    soma = num1 + num2;
    subtracao = num1 - num2;
    produto = num1 * num2;
    quociente = num1 / num2;
    resto = num1 % num2;

    printf("Exercicio 7:\n");
    printf("Valores: %d e %d\n", num1, num2);
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Produto: %d\n", produto);
    printf("Quociente: %d\n", quociente);
    printf("Resto da divisao: %d\n", resto);
    linha();
}

// 8 - Algoritmo com ID do estudante e suas 3 notas
void exercicio8() {
    int id = 12345;
    float nota1 = 8.5, nota2 = 7.0, nota3 = 9.5;
    float media;

    media = (nota1 + nota2 + nota3) / 3;

    printf("Exercicio 8:\n");
    printf("ID do estudante: %d\n", id);
    printf("Notas: %.1f, %.1f, %.1f\n", nota1, nota2, nota3);
    printf("Media: %.2f\n", media);

    if (media >= 7.0) {
        printf("Situacao: Aprovado\n");
        linha();
    }
    else {
        printf("Situacao: Reprovado\n");
        linha();
    }
}

// 9 - Considere o algoritmo com entrada altura com o gênero do estudante
void exercicio9() {
    float altura = 1.75;
    char genero = 'M';  // 'M' para masculino, 'F' para feminino
    float numero_ideal;

    //numeros arbritarios
    if (genero == 'M') {
        numero_ideal = (72.7 * altura) - 45.69;
    }
    else {
        numero_ideal = (62.6 * altura) - 42.0;
    }

    printf("Exercicio 9:\n");
    printf("Altura: %.2f metros\n", altura);
    printf("Genero: %c\n", genero);
    printf("Numero ideal: %.2f kg\n\n", numero_ideal);
}

// 10 - Algoritmo com hora de início e final de um jogo
void exercicio10() {
    int hora_inicio = 14;
    int hora_fim = 18;
    int duracao;

    if (hora_fim > hora_inicio) {
        duracao = hora_fim - hora_inicio;
    }
    else {
        duracao = 24 - hora_inicio + hora_fim;
    }

    printf("Exercicio 10:\n");
    printf("Hora de inicio: %d:00\n", hora_inicio);
    printf("Hora de termino: %d:00\n", hora_fim);
    printf("Duracao do jogo: %d horas\n", duracao);
    linha();
}

// 11 - Algoritmo com conjunto de 4 números inteiros
void exercicio11() {
    int num1 = 5, num2 = 10, num3 = 15, num4 = 20;
    int soma = num1 + num2 + num3 + num4;
    float media = (float)soma / 4;
    int maior, menor;

    maior = num1;
    if (num2 > maior) maior = num2;
    if (num3 > maior) maior = num3;
    if (num4 > maior) maior = num4;

    menor = num1;
    if (num2 < menor) menor = num2;
    if (num3 < menor) menor = num3;
    if (num4 < menor) menor = num4;

    printf("Exercicio 11:\n");
    printf("Numeros: %d, %d, %d, %d\n", num1, num2, num3, num4);
    printf("Soma: %d\n", soma);
    printf("Media: %.2f\n", media);
    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    linha();
}

// 12 - Algoritmo com entrada de um valor real
void exercicio12() {
    float valor = 15.75;
    int parte_inteira;
    float parte_fracionaria;

    parte_inteira = (int)valor;
    parte_fracionaria = valor - parte_inteira;

    printf("Exercicio 12:\n");
    printf("Valor: %.2f\n", valor);
    printf("Parte inteira: %d\n", parte_inteira);
    printf("Parte fracionaria: %.2f\n", parte_fracionaria);
    linha();
}

// 13 - Considere um algoritmo com entrada de 10 números inteiros
void exercicio13() {
    int numeros[10] = { 5, 10, 15, 20, 25, 30, 35, 40, 45, 50 }; // Array/Vetor com meus dados
    int soma = 0, pares = 0, impares = 0;

    for (int i = 0; i < 10; i++) {
        soma += numeros[i];

        //Checar a quantidade de pares e impares
        if (numeros[i] % 2 == 0) {
            pares++;
        }
        else {
            impares++;
        }
    }

    printf("Exercicio 13:\n");
    printf("Numeros: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\nSoma: %d\n", soma);
    printf("Quantidade de pares: %d\n", pares);
    printf("Quantidade de impares: %d\n", impares);
    linha();
}

// 14 - Algoritmo com 4 caracteres
void exercicio14() {
    char c1 = 'A', c2 = 'B', c3 = 'C', c4 = 'D';

    printf("Exercicio 14:\n");
    printf("Caracteres: %c %c %c %c\n", c1, c2, c3, c4);
    printf("Codigos ASCII: %d %d %d %d\n", c1, c2, c3, c4); //maneiro isso aqui
    linha();
}

// 15 - Considere um algoritmo entrada de 2 números inteiros, 1 número real e 3 carácteres 
void exercicio15() {
    int num1 = 10;
    int num2 = 20;
    float real = 15.75;
    char c1 = 'X', c2 = 'Y', c3 = 'Z';

    printf("Exercicio 15:\n");
    printf("Numeros inteiros: %d e %d\n", num1, num2);
    printf("Numero real: %.2f\n", real);
    printf("Caracteres: %c %c %c\n", c1, c2, c3);
    linha();
}

// 16 - Seis novos algoritmos propostos

// 16.1 - Algoritmo para calcular a área e o perímetro de um retângulo
void algoritmo16_1() {
    float base = 5.0;
    float altura = 3.0;
    float area;
    float perimetro;

    area = base * altura;
    perimetro = 2 * (base + altura);

    printf("Algoritmo 16.1 - Retangulo:\n");
    printf("Base: %.1f, Altura: %.1f\n", base, altura);
    printf("Area: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);
    linha();
}

// 16.2 - Algoritmo para conversão de temperatura (Celsius para Fahrenheit)
void algoritmo16_2() {
    float celsius = 25.0;
    float fahrenheit;

    fahrenheit = (celsius * 1.8) + 32;

    printf("Algoritmo 16.2 - Conversao de temperatura Celsius para Fahrenheit:\n");
    printf("Temperatura em Celsius: %.1f C\n", celsius);
    printf("Temperatura em Fahrenheit: %.1f F\n", fahrenheit);
    linha();
}

// 16.3 - Algoritmo para cálculo de area de um circulo
void algoritmo16_3() {
    float pi = 3.141592;
    float raio = 3.0;
    float area;

    area = pi * pow(raio, 2);

    printf("Algoritmo 16.3 - Area de um circulo:\n");
    printf("Raio: %.1f\n", raio);
    printf("Area: %.2f\n", area);
    linha();
}

// 16.4 - Algoritmo para cálculo de IMC (Índice de Massa Corporal)
// https://abeso.org.br/obesidade-e-sindrome-metabolica/calculadora-imc/
void algoritmo16_4() {
    float peso = 70.0;
    float altura = 1.75;
    float imc;

    imc = peso / (altura * altura);

    printf("Algoritmo 16.4 - Calculo de IMC:\n");
    printf("Peso: %.1f kg\n", peso);
    printf("Altura: %.2f m\n", altura);
    printf("IMC: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Classificacao: Abaixo do peso\n");
        linha();
    }
    else if (imc < 25.0) {
        printf("Classificacao: Peso normal\n");
        linha();
    }
    else if (imc < 30.0) {
        printf("Classificacao: Sobrepeso\n");
        linha();
    }
    else {
        printf("Classificacao: Obesidade\n");
        linha();
    }
}

// 16.5 - Algoritmo para cálculo de juros simples
void algoritmo16_5() {
    float capital = 1000.0;
    float taxa = 0.05;//5% a.m
    float tempo = 12; //em meses

    float juros = capital * taxa * tempo;
    float montante = capital + juros;

    printf("Algoritmo 16.5 - Calculo de juros simples:\n");
    printf("Capital: R$ %.2f\n", capital);
    printf("Taxa de juros: %.1f%% ao mes\n", taxa * 100);
    printf("Tempo: %.1f meses\n", tempo);
    printf("Juros: R$ %.2f\n", juros);
    printf("Montante: R$ %.2f\n", montante);
    linha();
}

// 16.6 - Algoritmo para verificar se três valores podem formar um triângulo
// https://wagnergaspar.com/exercicio-10-dados-3-valores-verifique-se-formam-um-triangulo-equilatero-isosceles-ou-escaleno/
// Algoritomo acima porém escrito do meu jeito :)
void algoritmo16_6() {
    float lado1 = 3.0;
    float lado2 = 4.0;
    float lado3 = 5.0;
    int eh_triangulo = 0;

    if (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2) {
        eh_triangulo = 1;
    }

    printf("Algoritmo 16.6 - Verificacao de triangulo:\n");
    printf("Lados: %.1f, %.1f, %.1f\n", lado1, lado2, lado3);

    if (eh_triangulo) {
        printf("Estes valores podem formar um triangulo.\n");

        if (lado1 == lado2 && lado2 == lado3) {
            printf("Tipo: Triangulo equilatero\n");
            linha();
        }
        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("Tipo: Triangulo isosceles\n");
            linha();
        }
        else {
            printf("Tipo: Triangulo escaleno\n");
            linha();
        }
    }
    else {
        printf("Estes valores NAO podem formar um triangulo.\n");
        linha();
    }
}

int main() {
    exercicio1();
    exercicio2();
    exercicio3();
    exercicio4();
    exercicio5();
    exercicio6();
    exercicio7();
    exercicio8();
    exercicio9();
    exercicio10();
    exercicio11();
    exercicio12();
    exercicio13();
    exercicio14();
    exercicio15();

    algoritmo16_1();
    algoritmo16_2();
    algoritmo16_3();
    algoritmo16_4();
    algoritmo16_5();
    algoritmo16_6();

    return 0;
}