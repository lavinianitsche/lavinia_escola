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
    float x = 3.14, y = 1.86;
    float menos = x - y;
    printf("%f - %f = %f\n", x, y, menos);
    printf("subtracao = %f\n", x - y);

    return 0;
}
