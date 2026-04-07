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

    printf("soma dos numeros positivos: %d\n", soma);*/

    printf("\nexercicio 3\n");
    int op;
    float soma, sub, mult, div, sair;

    printf("operaçoes:\n");
    printf("1 - soma\n");
    printf("2 - subtracao\n");
    printf("3 - multiplicacao\n");
    printf("4 - divisao\n");
    printf("5 - sair\n");

    printf("digite o numero da forma: \n");
    scanf("%d", &op);

    while (op != 5)
    {
        switch (op)
        {
        case 1:
            // printf("1 - soma\n");
            // printf("digite o primeiro numero: \n");
            // scanf("%f");
            // printf("area: %.2f\n", lado * lado);
            // printf("perimetro: %.2f\n", 4 * lado);
            // break;
        
        default:
            break;
        }
    }


    return 0;
}