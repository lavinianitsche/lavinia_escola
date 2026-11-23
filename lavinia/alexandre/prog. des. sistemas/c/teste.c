#include <stdio.h>
#include <stdbool.h>

int main(){

    printf("\nexercicio 10\n");
    int uno, due;
    int sub = uno - due;
    printf("digite um numero: ");
    scanf(" %d", &uno);
    printf("digite outro numero: ");
    scanf(" %d", &due);
    printf("%d - %d = %d\n", uno, due, sub);
    printf("subtracao = %d\n", uno - due);

    return 0;
}