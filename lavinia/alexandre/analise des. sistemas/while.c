#include <stdio.h>

int main() {
    
    printf("\nexercicio 1\n");
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
    int nota1;
    int contador = 0;
    char resposta;
    float somaa = 0;

    printf("digite a primeira nota: ");
    scanf("%d", &nota1);
    somaa = somaa + nota1;
    contador = contador + 1;

    printf("deseja adicionar mais notas? s/n: ");
    scanf(" %c", &resposta);
    
    
    while (resposta == 's'){
        
        printf("digite a proxima nota: ");
        scanf("%d", &nota1);
        somaa = somaa + nota1;
        contador = contador + 1;

        printf("deseja adicionar mais notas? s/n: ");
        scanf(" %c", &resposta);

    }

    if (contador > 0) {
        media = somaa / contador;
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
    int numbero;
    printf("digite um numero (0 para parar): ");
    scanf(" %d", &numbero);
    
    while (numbero != 0){
        
    (numbero % 2 == 0 ? printf("par\n") : printf("impar\n"));
    
    printf("digite um numero: ");
    scanf(" %d", &numbero);
    }




    printf("\nexercicio 9\n");

    int valor;
    char continuar;
    int notas100, notas50, notas20, notas10;

    do {
        printf("Digite o valor do saque (entre 10 e 1000, notas disponiveis: 10, 20, 50, 100): ");
        scanf("%d", &valor);
    
    if (valor < 10 || valor > 1000 || valor % 10 != 0) {
        printf("Valor invalido!\n");
    } else {
        notas100 = valor / 100;
        valor = valor % 100;
        
        notas50 = valor / 50;
        valor = valor % 50;
        
        notas20 = valor / 20;
        valor = valor % 20;
        
        notas10 = valor / 10;
        
        printf("\nNotas fornecidas:\n");
        if (notas100 > 0) printf("%d nota(s) de R$ 100\n", notas100);
        if (notas50 > 0) printf("%d nota(s) de R$ 50\n", notas50);
        if (notas20 > 0) printf("%d nota(s) de R$ 20\n", notas20);
        if (notas10 > 0) printf("%d nota(s) de R$ 10\n", notas10);
    }
    
    printf("\nDeseja fazer outro saque? (s/n): ");
    scanf(" %c", &continuar);
    
    switch (continuar) {
        case 's':
            printf("\n--- Novo saque ---\n");
            break;
        case 'n':
            printf("Programa encerrado. Obrigado!\n");
            break;
        default:
            printf("Opcao invalida! Programa encerrado.\n");
            continuar = 'n';
            break;
    }
    
    } while (continuar == 's');




    printf("\nexercicio 10\n");
    int numeros;
    int palpite;
    
    srand(time(NULL));
    numeros = rand() % 100 + 1;
    
    while (palpite != numeros){
        printf("digite seu palpite: ");
        scanf("%d", &palpite);
        
        if (palpite > numeros){
            printf("menor!\n");
        } else if (palpite < numeros){
            printf("maior!\n");
        }
    }
    
    printf("acertou!");

   


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




    printf("\nexercicio 12\n");
    int opcaao;
    float temperatura, convertida;
    
    while (1) {
        printf("\nmenu de conversao de temperatura\n");
        printf("1. converter celsius para fahrenheit\n");
        printf("2. converter fahrenheit para celsius\n");
        printf("3. sair\n");
        printf("escolha uma opcao (1-3): ");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1:
                printf("\nDigite a temperatura em Celsius: ");
                scanf("%f", &temperatura);
                convertida = (temperatura * 9.0/5.0) + 32;
                printf("%.2f graus Celsius = %.2f graus Fahrenheit\n", temperatura, convertida);
                break;
                
            case 2:
                printf("\nDigite a temperatura em Fahrenheit: ");
                scanf("%f", &temperatura);
                convertida = (temperatura - 32) * 5.0/9.0;
                printf("%.2f graus Fahrenheit = %.2f graus Celsius\n", temperatura, convertida);
                break;
                
            case 3:
                printf("\nPrograma encerrado.\n");
                return 0;
                
            default:
                printf("\nOpcao invalida!\n");
                break;
        }
    


    }



    
    printf("\nexercicio 13\n");
    int no, contar = 0;
    long a = 0, b = 1, prox;

    printf("digite quantos numeros da sequencia de fibonacci voce quer ver: ");
    scanf("%d", &no);

    while (contar < no) {
        printf("%ld ", a);
        prox = a + b;
        a = b;
        b = prox;
        contar++;
    }

    return 0;
}