#include <stdio.h>

#define max 7

int main() {

    int vetor[5] = {4, 7, 8, 3, 6};
    printf("imprimindo 1 por 1\n");
    printf("%d\n", vetor[0]);
    printf("%d\n", vetor[1]);
    printf("%d\n", vetor[2]);
    printf("%d\n", vetor[3]);
    printf("%d\n", vetor[4]);
    
    printf("imprimindo tudo\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", vetor[i]);
    }

    char vetornome[max] = {'l', 'a', 'v', 'i', 'n', 'i', 'a'};
    for (int i = 0; i < max; i++) {
        printf("%c", vetornome[i]);
    }

    return 0;
}