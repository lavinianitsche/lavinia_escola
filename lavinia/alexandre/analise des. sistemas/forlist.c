#include <stdio.h>

int main() {
    
    printf("exercicio 1\n");
    int somar = 0;
    for (int num = 0; num <= 10; num ++){
        somar += num;
    }
    printf("%d\n", somar);
    



    printf("\nexercicio 2\n");
    int tabuada;
    printf("digite um numero: ");
    scanf("%d", &tabuada);
    
    printf("tabuada do %d\n", tabuada);
    
    for (int n = 1; n <=10; n++){
        printf("%d * %d = %d\n", tabuada, n, tabuada * n);
    }
    



    printf("\nexercicio 3\n");
    int intervalo;

    printf("escreva o intervalo desejado: ");
    scanf("%d", &intervalo);

    for (int numero = 100; numero >= 0; numero -= intervalo){
        printf("%d\n", numero);
    }




    printf("\nexercicio 4\n");
    int number;
    int maior;

    printf("digite o primeiro numero: ");
    scanf("%d", &number);
    
    maior = number;
    
    for (int i = 2; i <= 10; i++) {

        printf("digite o %d numero: ", i);
        scanf("%d", &number);

        if (number > maior) {
            maior = number;
        }
    }
    
    printf("\n o maior valor digitado foi: %d\n", maior);
    



    printf("\nexercicio 5\n");
    int idade;
    int velho = 0;
    
    for (int id = 1; id <= 10; id ++){
        printf("insira a sua idade: ");
        scanf("%d", &idade);
        
        if (idade >= 18){
            velho++;
        }
    }
            
    printf("pessoas maiores de 18 anos: %d", velho);
            



    printf("\nexercicio 6\n");
    int patinhos;
    
    printf("digite quantos patinhos a mamae patinha tem: ");
    scanf("%d", &patinhos);

    for (int p = patinhos; p < 0; p--){

        if(p > 1){

            printf("%d patinhos foram passear\n", p);
            printf("alem das montanhas para brincar\n");
            printf("a mamae gritou: qua qua qua qua\n");
            printf("mas so %d patinhos voltaram de la\n", p - 1);

        } else {

            printf("%d patinhos foram passear\n", p);
            printf("alem das montanhas para brincar\n");
            printf("a mamae gritou: qua qua qua qua\n");
            printf("mas so nenhum patinho voltou de la\n");
        }
        printf("\n");
    }

    printf("a mamae patinha foi procurar\n");
    printf("alem das montanhas, na beira do mar\n");
    printf("a mamae gritou: qua qua qua qua\n");
    printf("e os %d patinhos voltaram de la\n", patinhos);
    


    
    printf("\nexercicio 7\n");
    int numbero;
    int pares = 0;
    int impares = 0;
    
    for (int il = 0; il < 10; il++) {
        printf("digite um numero: ", il + 1);
        scanf("%d", &numbero);
        
        if (numbero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }
    
    printf("\nquantidade de numeros pares: %d\n", pares);
    printf("quantidade de numeros impares: %d\n", impares);



    printf("\nexercicio 8\n");
    int n1 = 0, num1 = 0, num2 = 1, proxnum;
    printf("digite o numero de termos: ");
    scanf("%d", &n1);
    
    for(int in = 0; in < n1; in++){
        printf("%d ", num1);
        
        proxnum = num1 + num2;
        num1 = num2;
        num2 = proxnum;
    }
    printf("(%d termos)\n", n1);




    printf("\nexercicio 9\n");
    float nota;
    float soma = 0;
    float media;

    for (int me = 1; me <= 10; me++) {
        printf("Digite a nota do %d aluno: ", me);
        scanf("%f", &nota);
        
        soma = soma + nota;
    }
    
    media = soma / 10;
    
    printf("\nmedia da turma: %.2f\n", media);

    return 0;
}