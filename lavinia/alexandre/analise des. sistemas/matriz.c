#include <stdio.h>

int main() {

    printf("\nexercicio 1\n");
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int l = 0; l < 3; l++){
        for (int L = 0; L < 3; L++){
            printf(" %d ", matriz[l][L]);
        }
        printf("\n");
    }

    for(int l = 0; l < 3; l++) {
        for(int L = 0; L < 3; L++) {
            matriz[l][L] *= 5; 
        }
    }

    printf("\nmatriz multiplicada por 5\n");

    for (int l = 0; l < 3; l++){
        for (int L = 0; L < 3; L++){
            printf(" %d ", matriz[l][L]);
        }
        printf("\n");
    }




    printf("\nexercicio 2\n");
    int vetor[3] = {2, 3, 1};
    int resultado[3];
    int mult[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    printf("\nmatriz:\n");
    for (int m = 0; m < 3; m++){
        for (int n = 0; n < 3; n++){
            printf(" %d ", mult[m][n]);
        }
        printf("\n");
    }
    
    printf("\ncalculo:\n");
    for(int i = 0; i < 3; i++) {
        resultado[i] = 0;
        printf("linha %d: ", i + 1);
        for(int j = 0; j < 3; j++) {
            resultado[i] += vetor[i] * mult[i][j];
            if(j == 0) {
                printf("%d x %d", vetor[i], mult[i][j]);
            } else {
                printf(" + %d x %d", vetor[i], mult[i][j]);
            }
        }
        printf(" = %d\n", resultado[i]);
    }
    
    printf("\nresultado final:\n");
    printf("[ ");
    for(int i = 0; i < 3; i++) {
        printf("%d ", resultado[i]);
    }
    printf("]\n");




    printf("\nexercicio 3\n");
    int peg[3][3];

    printf("digite numeros inteiros para a matriz 3x3:\n");
    for(int p = 0; p < 3; p++) {
        for(int e = 0; e < 3; e++) {
            printf("elemento [%d][%d]: ", p + 1, e + 1);
            scanf("%d", &peg[p][e]);
        }
    }

    printf("\nmatriz 3x3 preenchida:\n");
    for(int p = 0; p < 3; p++) {
        printf("[ ");
        for(int e = 0; e < 3; e++) {
            printf("%2d ", peg[p][e]);
        }
        printf("]\n");
    }




    printf("\nexercicio 4\n");
    int lin[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int soma_lin[4] = {0, 0, 0, 0};

    for(int q = 0; q < 4; q++) {
        for(int w = 0; w < 4; w++) {
            soma_lin[q] += lin[q][w];
        }
    }

    printf("\nmatriz:\n");
    for (int q = 0; q < 4; q++){
        for (int w = 0; w < 4; w++){
            printf(" %d ", lin[q][w]);
        }
        printf("\n");
    }

    printf("\nsoma:\n");
    for(int q = 0; q < 4; q++) {
        printf("linha %d: ", q + 1);
        for(int w = 0; w < 4; w++) {
            if(w == 0) {
                printf("%d", lin[q][w]);
            } else {
                printf(" + %d", lin[q][w]);
            }
        }
        printf(" = %d\n", soma_lin[q]);
    }




    printf("\nexercicio 5\n");
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int col[4] = {0};
    
    printf("matriz:\n");
    for(int ma = 0; ma < 4; ma++) {
        for(int M = 0; M < 4; M++) {
            printf("%d\t", matrix[ma][M]);
        }
        printf("\n");
    }

    for(int M = 0; M < 4; M++) {
        for(int ma = 0; ma < 4; ma++) {
            col[M] += matrix[ma][M];
        }
    }
    
    printf("\nsoma de cada coluna:\n");
    for(int M = 0; M < 4; M++) {
        printf("coluna %d soma: %d\n", M+1, col[M]);
    }




    printf("\nexercicio 6\n");
    int matrizA[2][2] = {{1, 2}, {3, 4}};
    int matrizB[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];
    
    printf("matriz a:\n");
    for(int e = 0; e < 2; e++) {
        for(int v = 0; v < 2; v++) {
            printf("%d\t", matrizA[e][v]);
        }
        printf("\n");
    }
    
    printf("\nmatriz b:\n");
    for(int e = 0; e < 2; e++) {
        for(int v = 0; v < 2; v++) {
            printf("%d\t", matrizB[e][v]);
        }
        printf("\n");
    }

    for(int e = 0; e < 2; e++) {
        for(int v = 0; v < 2; v++) {
            result[e][v] = matrizA[e][v] * matrizB[e][v];
        }
    }
    
    printf("\nresultado:\n");
    for(int e = 0; e < 2; e++) {
        for(int v = 0; v < 2; v++) {
            printf("%d\t", result[e][v]);
        }
        printf("\n");
    }




    printf("\nexercicio 7\n");   
    int matrizz[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int espelhada[4][4];
    
    for(int k = 0; k < 4; k++) {
        for(int o = 0; o < 4; o++) {
            espelhada[k][o] = matrizz[3 - k][o];
        }
    }
    
    printf("matriz original:\n");
    for(int k = 0; k < 4; k++) {
        printf("[ ");
        for(int o = 0; o < 4; o++) {
            printf("%2d ", matrizz[k][o]);
        }
        printf("]\n");
    }
    
    printf("\nmatriz espelhada (linhas invertidas):\n");
    for(int k = 0; k < 4; k++) {
        printf("[ ");
        for(int o = 0; o < 4; o++) {
            printf("%2d ", espelhada[k][o]);
        }
        printf("]\n");
    }




    printf("\nexercicio 8\n");
    int matrizes[3][3];
    int fib[9];
    fib[0] = 0;
    fib[1] = 1;
    
    for(int f = 2; f < 9; f++) {
        fib[f] = fib[f-1] + fib[f-2];
    }
    
    printf("primeiros 9 numeros de fibonacci: ");
    for(int f = 0; f < 9; f++) {
        printf("%d ", fib[f]);
    }
    
    printf("\n\nmatriz 3x3 de fibonacci:\n");
    int idx = 0;
    for(int f = 0; f < 3; f++) {
        printf("[ ");
        for(int b = 0; b < 3; b++) {
            matrizes[f][b] = fib[idx++];
            printf("%2d ", matrizes[f][b]);
        }
        printf("]\n");
    }


    return 0;
}