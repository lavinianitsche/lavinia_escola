#include <stdio.h>
#include <stdbool.h>

/*1. Crie um programa que declare uma variável do tipo int e imprima o seu valor.
2. Declare duas variáveis int, atribua valores a elas e imprima a soma.
3. Declare duas variáveis float, atribua valores decimais e imprima o resultado da subtração entre
elas.
4. Crie um programa que multiplique dois números inteiros e exiba o resultado.
5. Declare duas variáveis float, calcule a divisão entre elas e exiba o quociente.
6. Crie um programa que leia um número int, calcule o dobro e imprima.
7. Declare uma variável char com uma letra qualquer e exiba-a na tela.
8. Crie um programa que leia um número float, some 10.5 e exiba o resultado.
9. Declare quatro variáveis int, calcule a média e mostre o resultado como float.
10. Crie um programa que peça ao usuário dois números e exiba a diferença entre eles.
11. Crie um software que imprima a tabuada do 5.*/

int main(){
    printf("exercicio 1\n");
    char letra;
    int idade;
    float altura;
    printf("digite a primeria letra do seu nome: ");
    scanf(" %c", &letra); // espaço antes do %c para lipar o buffer
    printf("digite a sua idade: ");
    scanf(" %d", &idade);
    printf("digite a sua altura: ");
    scanf(" %f", &altura);

    printf("primeira letra do seu nome: %c\n", letra);
    printf("sua idade : %d\n", idade);
    printf("sua altura : %.2f\n", altura);
    


    printf("\nexercicio 2\n");
    int x = 10, y = 5;
    int somar = x + y;
    printf("%d + %d = %d\n", x, y, somar);
    printf("soma = %d\n", x + y);



    printf("\nexercicio 3\n");
    float one = 3.14, two = 1.86;
    float menos = one - two;
    printf("%f - %f = %f\n", one, two, menos);
    printf("subtracao = %f\n", one - two);



    printf("\nexercicio 4\n");
    int um = 2, dois = 4;
    int mult = um * dois;
    printf("%d * %d = %d\n", um, dois, mult);
    printf("multiplicacao = %d\n", um * dois);



    printf("\nexercicio 5\n");
    float a = 4.4, b = 2.2;
    float div = a / b;
    printf("%f / %f = %f\n", a, b, div);
    printf("divisao = %f\n", a / b);



    printf("\nexercicio 6\n");
    int numero = 2;
    int dobro = numero * 2;
    printf("%d * %d = %d\n", numero, 2, dobro);
    printf("dobro = %d\n", numero * 2);



    printf("\nexercicio 7\n");
    char letter = 'L';
    printf("melhor letra do alfabeto: %c\n", letter);



    printf("\nexercicio 8\n");
    float num = 33.5;
    float soma = num + 10.5;
    printf("%f / %f = %f\n", num, 10.5, soma);
    printf("resultado = %f\n", num + 10.5);



    printf("\nexercicio 9\n");
    int A = 9, B = 6, C = 8, D = 4;
    int plus = A + B + C + D;
    int media = plus / 4;
    printf("%d + %d + %d + %d = %d\n", A, B, C, D, plus);
    printf("%d / %d = %d\n", plus, 4, media);
    printf("media = %d\n", plus / 4);



    printf("\nexercicio 10\n");
    int uno, due;
    int sub = uno - due;
    printf("digite um numero: ");
    scanf(" %d", &uno);
    printf("digite outro numero: ");
    scanf(" %d", &due);
    printf("subtracao = %d\n", uno - due);



    printf("\nexercicio 11\n");
    int number = 5;
    printf("\ntabuada do 5\n");

    printf("5 * 1 = %d\n", number * 1);
    printf("5 * 2 = %d\n", number * 2);
    printf("5 * 3 = %d\n", number * 3);
    printf("5 * 4 = %d\n", number * 4);
    printf("5 * 5 = %d\n", number * 5);
    printf("5 * 6 = %d\n", number * 6);
    printf("5 * 7 = %d\n", number * 7);
    printf("5 * 8 = %d\n", number * 8);
    printf("5 * 9 = %d\n", number * 9);
    printf("5 * 10 = %d\n", number * 10);

    return 0;
}
