/*1)Faça um programa que peça e leia 4 notas, calcule e mostre
a média aritmética entre elas, se a média aritmética for:

Média maior ou igual a 70 – ALUNO APROVADO

Média menor que 70 – ALUNO REPROVADO

2) Faça um programa que leia 2 números e “diga” qual é o
maior deles.

3)Faça um software que peça um valor ao usuário e se o
código for igual a “1234” exiba a mensagem “Acesso
Liberado” se não exiba a mensagem “Acesso negado tente
novamente”.

4)Faça um software que peça ao usuário um valor inteiro, e
diga se o valor é positivo ou negativo.

5)Faça um software que pergunte a idade do usuário e se
a idade for maior ou igual a 18 avisa que ele é obrigado a
votar, caso contrário que não é obrigado a votar.

6)Faça um software que peça 2 números e os imprima em
ordem crescente.

7)Faça um software que pergunte o salário e se for maior
ou igual que R$2500,00 ele imprima a mensagem que não
vai receber um aumento, e se for menor que R$2500 ele
vai receber um aumento.*/

#include <stdio.h>

int main() {

    printf("exercicio 1\n");
    int A , B, C, D;
    printf("digite um numero: ");
    scanf(" %d", &A);
    printf("digite um numero: ");
    scanf(" %d", &B);
    printf("digite um numero: ");
    scanf(" %d", &C);
    printf("digite um numero: ");
    scanf(" %d", &D);

    int soma = A + B + C + D;
    float media = (float)soma / 4;

    printf("media = %.2f\n", media);

    (media < 7 ? printf("reprovado\n") : printf("aprovado\n"));
    



    printf("\nexercicio 2\n");
    int un, due;
    printf("digite um numero: ");
    scanf(" %d", &un);
    printf("digite outro numero: ");
    scanf(" %d", &due);
    
    (un > due ? printf("o maior e: %d\n", un) : printf("o maior e: %d\n", due));




    printf("\nexercicio 3\n");
    int password;
    printf("digite sua senha: ");
    scanf("%d", &password);
    (password == 1234 ? printf("acesso liberado\n") : printf("acesso negado\n"));




    printf("\nexercicio 4\n");
    int a;
    printf("digite um numero: ");
    scanf(" %d", &a);
    
    (a > 0 ? printf("positivo\n") : printf("negativo\n"));
    



    printf("\nexercicio 5\n");
    int idade;
    printf("insira sua idade: ");
    scanf("%d", &idade);

    (idade >= 18 ? printf("obrigatorio votar\n") : printf("nao e obrigatorio votar\n"));




    printf("\nexercicio 6\n");
    int um, dois;
    printf("digite um numero: ");
    scanf(" %d", &um);
    printf("digite outro numero: ");
    scanf(" %d", &dois);

    (um > dois ? printf("ordem crescente %d %d\n", dois, um) : printf("ordem crescente %d %d\n", um, dois));




    printf("\nexercicio 7\n");
    int salario;
    printf("qual seu salario?: ");
    scanf(" %d", &salario);

    (salario >= 2500? printf("nao vai receber aumento\n") : printf("vai receber aumento\n"));

    return 0;

}