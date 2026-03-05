#include <stdio.h>

/*1) Escreva um software para ler 2 valores
(considere que não serão informados valores
iguais) e escrever o maior deles.

2) Escreva um software que peça para o usuário
inserir a senha e se a senha for igual a
"1234" escreva acesso permitido se não acesso
negado.

3) Escreva um software para ler o ano de
nascimento de uma pessoa e escrever uma
mensagem que diga se ela é menor de idade ou
maior de idade.(nascido antes de 2008)

4) Escreva um programa que leia o número de laranjas
compradas, calcule e escreva o valor total da compra.
Levando em consideração que as laranjas custam R$
0,30 cada se forem compradas menos do que uma dúzia,
e R$ 0,25 se forem compradas pelo menos doze.

5) Escreva um programa para ler 2 valores inteiros
(considere que não serão lidos valores iguais) e
escrevê-los em ordem crescente.

6)Escreva um software que leia um número e informe se
ele é positivo ou negativo.

7)Escreva um software que leia 3 valores e diga se
ele é maior que zero, se ele é menor que zero ou se
ele é igual a zero.(if, else if, else)

8)Peça 4 notas de um aluno calcule a media e se a
nota for menor que 6 apareça reprovado, de 6 a 7 de
exame e maior que 7 aprovado.

9) Peça um número e diga se ele é par ou ímpar.

10)Faça um software que pergunte a idade do usuário e
verifique se ele é criança até 17, adulto até 59 ou
idoso maior que 60.*/

int main(){

    /*printf("exemplo\n");
    int idade;
    printf("insira sua idade: ");
    scanf("%d", &idade);
    if (idade >= 18){
        printf("vai trabalhar\n");
    } else if (idade < 0){
        printf("idade invalida");
    } else {
        printf("vai assistir desenho");
    }
    


    printf("\nexercicio 1\n");
    int un, due;
    printf("digite um numero: ");
    scanf(" %d", &un);
    printf("digite outro numero: ");
    scanf(" %d", &due);
    if (un > due){
        printf("o maior e o: %d", un);
    } else {
        printf("o maior e o: %d", due);
    }
    


    printf("\nexercicio 2\n");
    int password;
    printf("digite sua senha: ");
    scanf("%d", &password);
    if (password == 1234){
        printf("acesso permitido");
    } else {
        printf("acesso negado");
    }
    


    printf("\nexercicio 3\n");
    int ano;
    printf("qual ano tu nasceu?: ");
    scanf("%d", &ano);
    if (ano <= 2008){
        printf("maior de idade\n");
    } else {
        printf("menor de idade");
    }



    printf("\nexercicio 4\n");
    int laranjas;
    printf("quantas laranjas voce comprou?: ");
    scanf("%d", &laranjas);
    if (laranjas < 12){
        printf("total da compra: %.2f", laranjas * 0.30);
    } else {
        printf("total da compra: %.2f", laranjas * 0.25);
    }



    printf("\nexercicio 5\n");
    int um, dois;
    printf("digite um numero: ");
    scanf(" %d", &um);
    printf("digite outro numero: ");
    scanf(" %d", &dois);
    if (um > dois){
        printf("ordem crescente: %d %d", dois, um);
    } else {
        printf("ordem crescente: %d %d", um, dois);
    }



    printf("\nexercicio 6\n");
    int num;
    printf("digite um numero: ");
    scanf(" %d", &num);
    if (num > 0){
        printf("positivo");
    } else {
        printf("negativo");
    }



    printf("\nexercicio 7\n");
    int uno, dos, tres;
    printf("digite um numero: ");
    scanf(" %d", &uno);
    printf("digite um numero: ");
    scanf(" %d", &dos);
    printf("digite um numero: ");
    scanf(" %d", &tres);

    printf("\nprimeiro numero\n");
    if (uno > 0){
        printf("maior que zero\n");
    } else if (uno < 0){
        printf("menor que zero\n");
    } else {
        printf("igual a zero\n");
    }

    printf("\nsegundo numero\n");
    if (dos > 0){
        printf("maior que zero\n");
    } else if (dos < 0){
        printf("menor que zero\n");
    } else {
        printf("igual a zero\n");
    }

    printf("\nterceiro numero\n");
    if (tres > 0){
        printf("maior que zero\n");
    } else if (tres < 0){
        printf("menor que zero\n");
    } else {
        printf("igual a zero\n");
    }*/



    printf("\nexercicio 8\n");
    int A , B, C, D;
    int soma = A + B + C + D;
    int media = soma / 4;
    printf("digite um numero: ");
    scanf(" %d", &A);
    printf("digite um numero: ");
    scanf(" %d", &B);
    printf("digite um numero: ");
    scanf(" %d", &C);
    printf("digite um numero: ");
    scanf(" %d", &D);
    printf("%d + %d + %d + %d = %d\n", A, B, C, D, soma);
    printf("%d / %d = %d\n", soma, 4, media);
    printf("media = %d\n", soma / 4);
    if (media <= 6){
        printf("reprovado");
    } else {
        printf("aprovado");
    }
    


    return 0;
}