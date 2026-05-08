#include <stdio.h>

int main() {

    printf("\nexercicio 1\n");
    int somar[5] = {2, 4, 6, 8, 10};
    int soma = 0;
    
    printf("exercicio 1\n");
    for (int s = 0; s < 5; s++) {
        printf("%d\n", somar[s]);
        soma += somar[s];
    }
    
    printf("soma de todos os numeros: %d", soma);
    
    
    
    
    printf("\nexercicio 2\n");
    int num[10] = {7, 23, 5, 42, 19, 8, 31, 56, 14, 2};
    int maior;
    
    maior = num[0];
    
    for (int m = 1; m < 10; m++) {
        if (num[m] > maior) {
            maior = num[m];
        }
    }
    
    for (int m = 0; m < 10; m++) {
        printf("%d\n", num[m]);
    }

    printf("\no maior numero presente: %d", maior);




    printf("\nexercicio 3\n");
    int nm[8] = {75, 82, 63, 91, 58, 77, 69, 88};
    int plus = 0;
    float media;

    for(int me = 0; me < 8; me++) {
        plus += nm[me];
    }
    
    media = plus / 8;
    
    for (int me = 0; me < 8; me++) {
        printf("%d ", nm[me]);
    }
    
    printf("\na media aritmetica dos valores e: %.2f\n", media);




    printf("\nexercicio 4\n");
    int number[6] = {7, 12, 5, 8, 3, 10};
    int pares = 0;

    for (int p = 0; p < 6; p++) {
        printf("%d ", number[p]);
    }

    for(int p = 0; p < 6; p++) {
        if(number[p] % 2 == 0) {
            pares++;
        }
    }

    printf("quantidade de numeros pares: %d\n", pares);




    printf("\nexercicio 5\n");
    int numbero[7] = {12, 7, 23, 45, 9, 18, 31};
    int temp;
    
    
    printf("vetor original: ");
    for (int in = 0; in < 7; in++) {
        printf("%d ", numbero[in]);
    }
    
    printf("\n");
    
    for (int in = 0; in < 7 / 2; in++) {
        temp = numbero[in];
        numbero[in] = numbero[6 - in];
        numbero[6 - in] = temp;
    }
    
    printf("vetor invertido: ");
    for (int in = 0; in < 7; in++) {
        printf("%d ", numbero[in]);
    }

    printf("\n");




    printf("\nexercicio 6\n");
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int buscado, b, posicao = -1;

    printf("vetor: ");
    for (b = 0; b < 10; b++) {
        printf("%d ", vetor[b]);
    }
    printf("\n");

    printf("digite o valor a ser buscado: ");
    scanf("%d", &buscado);

    for (b = 0; b < 10; b++) {
        if (vetor[b] == buscado) {
            posicao = b;
            break;
        }
    }

    printf("posicao: %d\n", posicao);




    printf("\nexercicio 7\n");
    int vetorf[9] = {10, 5, 4, 20, 9, 4, 5, 29, 4};
    int x = 4;

    printf("original: ");
    for (int sa = 0; sa < 9; sa++) {
        printf("%d ", vetorf[sa]);
    }

    for (int sa = 0; sa < 9; sa++) {
        if (vetorf[sa] == x) {
            vetorf[sa] = 0;
        }
    }

    printf("\nmodificado (substitui %d por 0): ", x);
    for (int sa = 0; sa < 9; sa++) {
        printf("%d ", vetorf[sa]);  
    }
    printf("\n");




    printf("\nexercicio 8\n");
    int vetor1[4] = {1, 2, 3, 4};
    int vetor2[4] = {5, 6, 7, 8};
    int resultado[4];

    for (int i = 0; i < 4; i++) {
        resultado[i] = vetor1[i] + vetor2[i];
    }

    printf("vetor 1: ");
    for (int i = 0; i < 4; i++) {
        printf("%d  ", vetor1[i]);
    }

    printf("\nvetor 2: ");
    for (int i = 0; i < 4; i++) {
        printf("%d  ", vetor2[i]);
    }

    printf("\n\nresultado da soma (vetor1 + vetor2): ");
    for (int i = 0; i < 4; i++) {
        printf("%d  ", resultado[i]);
    }




    printf("\nexercicio 9:\n");
    int freq[15] = {2, 5, 3, 2, 8, 5, 1, 0, 3, 2, 5, 7, 2, 9, 3};
    int frequencia[10] = {0};
    
    printf("vetor: ");
    for(int f = 0; f < 15; f++) {
        printf("%d ", freq[f]);
    }
    
    for(int f = 0; f < 15; f++) {
        frequencia[freq[f]]++;
    }
    
    printf("\n\nFrequencia de cada numero:\n");
    for(int f = 0; f < 10; f++) {
        printf("Numero %d: %d vez(es)\n", f, frequencia[f]);
    }




    printf("\nexercicio 10\n");  
    int porta[12] = {5, 8, 3, 10, 7, 2, 9, 4, 6, 1, 12, 11};
    int paress[12], impares[12];
    int contP = 0, contI = 0;
    
    printf("vetor original: ");
    for(int ia = 0; ia < 12; ia++) {
        printf("%d ", porta[ia]);
    }
    
    for(int ia = 0; ia < 12; ia++) {
        if(porta[ia] % 2 == 0) {
            paress[contP] = porta[ia];
            contP++;
        } else {
            impares[contI] = porta[ia];
            contI++;
        }
    }
    
    printf("\n\nVetor de pares: ", contP);
    for(int ia = 0; ia < contP; ia++) {
        printf("%d ", paress[ia]);
    }
    
    printf("\nVetor de impares: ", contI);
    for(int ia = 0; ia < contI; ia++) {
        printf("%d ", impares[ia]);
    }
    printf("\n");
    
    return 0;
}