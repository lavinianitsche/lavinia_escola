#include <stdio.h>

int main() {
    
    /*printf("\nexercicio 1\n");
    int num = 0;
    printf("digite um numero\n");
    scanf("%d", &num);

    while (num >= 0)
    {
        printf("%d\t", num);
        num--;
    }

    printf("\ncontagem regressiva concluida\n");

    printf("\nexercicio 2\n");
    int numero;
    int soma = 0;
    
    while (numero >= 0) {
        soma = soma + numero;
        
        printf("digite um numero\n");
        scanf("%d", &numero);
    }

    printf("soma dos numeros positivos: %d\n", soma);

    printf("\nexercicio 3\n");
    int op;
    float um, dois;

    printf("Operacoes Matematicas\n");
    printf("1 - soma\n");
    printf("2 - subtracao\n");
    printf("3 - multiplicacao\n");
    printf("4 - divisao\n");
    printf("5 - sair\n");

    
    while (op != 5){
        
        printf("digite o numero da operacao desejada: \n");
        scanf("%d", &op);

        switch (op){

        case 1:
            printf("1 - Soma\n");
            printf("digite o primeiro numero: \n");
            scanf("%f", &um);
            printf("digite o segundo numero: \n");
            scanf("%f", &dois);
            printf("soma: %.2f\n", um + dois);
            break;

        case 2:
            printf("2 - subtracao\n");
            printf("digite o primeiro numero: \n");
            scanf("%f", &um);
            printf("digite o segundo numero: \n");
            scanf("%f", &dois);
            printf("subtracao: %.2f\n", um - dois);
            break;

        case 3:
            printf("3 - multiplicacao\n");
            printf("digite o primeiro numero: \n");
            scanf("%f", &um);
            printf("digite o segundo numero: \n");
            scanf("%f", &dois);
            printf("multiplicacao: %.2f\n", um * dois);
            break;

        case 4:
            printf("4 - divisao\n");
            printf("digite o primeiro numero: \n");
            scanf("%f", &um);
            printf("digite o segundo numero: \n");
            scanf("%f", &dois);
            printf("divisao: %.2f\n", um / dois);
            break;
    
        default:
            break;

        }

    }

    printf("\nexercicio 4\n");
    int senha;
    
    while (senha != 1234){
        
        printf("digite a senha: ");
        scanf("%d", &senha);

    }
    
    printf("acesso permitido");


    printf("\nexercicio 5\n");
    int nota;

    while (nota < 0 || nota > 10){
        printf("digite uma nota de 0 a 10: ");
        scanf("%d", &nota);
    }
    
    printf("nota registrada");


    printf("\nexercicio 6\n");
    int media;
    int nota;
    int contador = 0;
    char resposta;
    float soma = 0;

    printf("digite a primeira nota: ");
    scanf("%d", &nota);
    soma = soma + nota;
    contador = contador + 1;

    printf("deseja adicionar mais notas? s/n: ");
    scanf(" %c", &resposta);
    
    
    while (resposta == 's'){
        
        printf("digite a proxima nota: ");
        scanf("%d", &nota);
        soma = soma + nota;
        contador = contador + 1;

        printf("deseja adicionar mais notas? s/n: ");
        scanf(" %c", &resposta);

    }

    if (contador > 0) {
        media = soma / contador;
        printf("media das %d notas: %d\n", contador, media);
    } else {
        printf("nenhuma nota foi digitada.\n");
    }

    printf("\nexercicio 7\n");
    int number;
    int divisor = 2;
    int primo = 1;
    
    printf("digite um numero inteiro: ");
    scanf("%d", &number);

    if (number < 2){
        primo = 0;
    }
    
    while (divisor <= number / 2 && primo == 1){
        if (number % divisor == 0) {
        primo = 0;
    }
        divisor = divisor + 1;

    }
    
    if (primo == 1) {
        printf("%d e um numero primo!\n", number);
    } else {
        printf("%d NAO e um numero primo.\n", number);
    }
           
    printf("\nexercicio 8\n");
    int number;
    printf("digite um numero (0 para parar): ");
    scanf(" %d", &number);
    
    while (number != 0){
        
    (number % 2 == 0 ? printf("par\n") : printf("impar\n"));
    
    printf("digite um numero: ");
    scanf(" %d", &number);
    }*/
   
    printf("\nexercicio 11\n");
    int n = 1;
    int tabuada;
    char opcao;
    
    do {
        n = 0;

        printf("digite um numero: \n");
        scanf("%d", &tabuada);

        while (n <= 10) {
            printf("%d * %d = %d\n", tabuada, n, n * tabuada);
            n++;
        }
        printf("deseja continuar? (s/n): ");
        scanf(" %c", &opcao);

    } while (opcao == 's');

    return 0;
}