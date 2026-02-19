#include <stdio.h>
#include <stdbool.h>

// exercício 1
// a - declarar um tipo de cada das variveis e atribuir o nome que quiser
// b - imprimir as variaveis
// c - declarar tres variaveis do mesmo tipo em uma linha e imprimi-las uma ao lado da outra
// d - declarar uma variavel em uma linha e atribuir o valor em outra e imprimi-la
// e - escrever seu nome

int main(){
    int numero = 8, x = 6, l = 4;
    float pi = 3.14159;
    char letra = 'L', letra2 = 'a', letra3 = 'v', letra4 = 'i';
    int kitty;
    kitty = 2;
    bool meow = true;

    printf("numero %d,%d,%d\n", numero, x, l);
    printf("float %.2f\n", pi);
    printf("nome: %c,%c,%c,%c\n", letra, letra2, letra3, letra4);
    printf("kitty: %d\n", kitty);
    printf("gato %d\n", meow);
    
    return 0;
}