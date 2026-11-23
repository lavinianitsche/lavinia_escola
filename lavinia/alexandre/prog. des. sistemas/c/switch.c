#include <stdio.h>

int main () {
    char operador;
    double num1, num2;
    printf("digite o primeiro valor: \n");
    scanf ("%lf", &num1);
    printf("digite o operador: \n");
    scanf (" %c", &operador);
    printf("digite o segundo valor: \n");
    scanf ("%lf", &num2);

    switch (operador) {
        case '+':
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        
        case '-':
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;

        case '*':
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;

        case '/':
        printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            break;

        default:
        printf("opcao invalida\n");
    }

    return 0;
}