#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// exercicio 1
bool ePrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    
    if (numero == 2) {
        return true;
    }
    
    if (numero % 2 == 0) {
        return false;
    }
    
    int limite = (int)sqrt(numero);
    for (int i = 3; i <= limite; i += 2) {
        if (numero % i == 0) {
            return false;
        }
    }
    
    return true;
}

// exercicio 2
void calcularFatorial() {
    int numero;
    long long fatorial = 1;
    
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &numero);
    
    if (numero < 0) {
        printf("Erro: Fatorial de número negativo não existe!\n");
        return;
    }
    
    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }
    
    printf("%d! = ", numero);
    for (int i = numero; i >= 1; i--) {
        printf("%d", i);
        if (i > 1) printf(" * ");
    }
    printf(" = %lld\n", fatorial);
}




// exercicio 3
void calcularPotencia() {
    int base, expoente;
    long long resultado = 1;
    
    printf("Digite a base: ");
    scanf("%d", &base);
    
    printf("Digite o expoente: ");
    scanf("%d", &expoente);
    
    if (expoente < 0) {
        printf("Erro: Expoente negativo não suportado (resultado seria decimal)\n");
        return;
    }
    
    for (int a = 1; a <= expoente; a++) {
        resultado *= base;
    }
    
    printf("%d elevado a %d = %lld\n", base, expoente, resultado);
}



// exercicio 4
int maiorEntreTres(int a, int b, int c) {
    int maior = a;
    
    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }
    
    return maior;
}



// exercicio 5
bool ePar(int numero) {
    return numero % 2 == 0;
}

// exercicio 7
float quadrado(float l) { 
    return l * l;
}
float retangulo(float b, float a) {
    return b * a;
}
float circulo(float r) {
    return 3.14159 * r * r;
}
float triangulo(float b, float a) {
    return (b * a) / 2;
}
float trapezio(float B, float b, float a) {
    return ((B + b) * a) / 2;
}
float losango(float D, float d) {
    return (D * d) / 2;
}
float hexagono(float l) {
    return (3 * sqrt(3) * l * l) / 2;
}

// exercicio 8
void quadradoo() { 
    float l; printf("Lado: "); 
    scanf("%f", &l); 
    printf("Perimetro: %.2f\n", 4*l); 
}
void retanguloo() { 
    float b, a; 
    printf("Base: "); 
    scanf("%f", &b); 
    printf("Altura: "); 
    scanf("%f", &a); 
    printf("Perimetro: %.2f\n", 2*(b+a)); 
}
void circuloo() { 
    float r; 
    printf("Raio: "); 
    scanf("%f", &r); 
    printf("Perimetro: %.2f\n", 2*3.14159*r); 
}
void trianguloo() { 
    float l; 
    printf("Lado: "); 
    scanf("%f", &l); 
    printf("Perimetro: %.2f\n", 3*l); 
}
void trapezioo() { 
    float bM, bm, l1, l2; 
    printf("Base maior: "); 
    scanf("%f", &bM); 
    printf("Base menor: "); 
    scanf("%f", &bm); 
    printf("Lado 1: "); 
    scanf("%f", &l1); 
    printf("Lado 2: "); 
    scanf("%f", &l2); 
    printf("Perimetro: %.2f\n", bM+bm+l1+l2); 
}
void losangoo() { 
    float l; 
    printf("Lado: "); 
    scanf("%f", &l); 
    printf("Perimetro: %.2f\n", 4*l); 
}
void hexagonoo() { 
    float l; 
    printf("Lado: "); 
    scanf("%f", &l); 
    printf("Perimetro: %.2f\n", 6*l); 
}




// exercicio 9
void celsiusParaFahrenheit() {
    float c;
    printf("Celsius: ");
    scanf("%f", &c);
    printf("%.2fC = %.2fF\n", c, (c * 9/5) + 32);
}

void fahrenheitParaCelsius() {
    float f;
    printf("Fahrenheit: ");
    scanf("%f", &f);
    printf("%.2fF = %.2fC\n", f, (f - 32) * 5/9);
}




// exercicio 10
void fibonacci(int n) {
    int a = 0, b = 1, prox, i;
    
    if (n <= 0) return;
    
    for (i = 0; i < n; i++) {
        printf("%d ", a);
        prox = a + b;
        a = b;
        b = prox;
    }
}




// exercicio 11
int verificarValor(int num) {
    if(num > 0) {
        return 1;
    } 
    else if(num < 0) {
        return -1;
    } 
    else {
        return 0;
    }
}




int main() {

    printf("\nexercicio 1\n");
    int numeros;
    
    printf("digite um numero: ");
    scanf("%d", &numeros);
    
    for (int b = 0; b < 1; b++) {
        int num = numeros;
        if (ePrimo(num)) {
            printf("%d e primo\n", num);
        } else {
            printf("%d nao e primo\n", num);
        }
    }
    
    


    printf("\nexercicio 2\n");
    int num, fat = 1;
    
    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Erro: Fatorial de numero negativo não existe!\n");
    } else {
        for (int i = 1; i <= num; i++) {
            fat *= i;
        }
        printf("%d! = %d\n", num, fat);
    }




    printf("\nexercicio 3\n");
    calcularPotencia();




    printf("\nexercicio 4\n");
    int val1, val2, val3;
    
    printf("Digite o primeiro valor (a): ");
    scanf("%d", &val1);
    
    printf("Digite o segundo valor (b): ");
    scanf("%d", &val2);
    
    printf("Digite o terceiro valor (c): ");
    scanf("%d", &val3);
    
    int resultado = maiorEntreTres(val1, val2, val3);
    
    printf("O maior valor entre %d, %d e %d: %d\n", val1, val2, val3, resultado);
    



    printf("\nexercicio 5\n");
    int parimpar;
    
    printf("digite um numero: ");
    scanf("%d", &parimpar);


    if (ePar(parimpar)) {
        printf("e par");
    } else {
        printf("e impar");
    }




    printf("\nexercicio 7\n");
    int op;
    float v1, v2, v3;
    
    printf("1 - quadrado 2 - retangulo 3 - circulo 4 - triangulo 5 - trapezio 6 - losango 7 - hexagono: ");
    scanf("%d", &op);
    
    switch(op) {
        case 1:
            printf("lado: ");
            scanf("%f", &v1);
            printf("area: %.2f\n", quadrado(v1));
            break;
        case 2:
            printf("base altura: ");
            scanf("%f %f", &v1, &v2);
            printf("area: %.2f\n", retangulo(v1, v2));
            break;
        case 3:
            printf("raio: ");
            scanf("%f", &v1);
            printf("area: %.2f\n", circulo(v1));
            break;
        case 4: 
            printf("base altura: ");
            scanf("%f %f", &v1, &v2);
            printf("area: %.2f\n", triangulo(v1, v2));
            break;
        case 5:
            printf("base maior base menor altura: ");
            scanf("%f %f %f", &v1, &v2, &v3);
            printf("area: %.2f\n", trapezio(v1, v2, v3));
            break;
        case 6:
            printf("diagonal maior diagonal menor: ");
            scanf("%f %f", &v1, &v2);
            printf("area: %.2f\n", losango(v1, v2));
            break;
        case 7:
            printf("lado: ");
            scanf("%f", &v1);
            printf("area: %.2f\n", hexagono(v1));
            break;

        default: printf("opcao invalida\n");
    }




    printf("\nexercicio 8\n");
    int opp;
    do {
        printf("\n1-Quadrado 2-Retangulo 3-Circulo 4-Triangulo 5-Trapezio 6-Losango 7-Hexagono 8-Sair\nOpcao: ");
        scanf("%d", &opp);
        if(opp==1) quadradoo();
        else if(opp==2) retanguloo();
        else if(opp==3) circuloo();
        else if(opp==4) trianguloo();
        else if(opp==5) trapezioo();
        else if(opp==6) losangoo();
        else if(opp==7) hexagonoo();
        else if(opp==8) printf("Saindo...\n");
        else printf("Opcao invalida!\n");
    } while(opp!=8);




    printf("\nexercicio 9\n");
    int ope;
    do {
        printf("\n1-Celsius p/ Fahrenheit  2-Fahrenheit p/ Celsius  3-Sair\nOpcao: ");
        scanf("%d", &ope);
        if(ope == 1) celsiusParaFahrenheit();
        else if(ope == 2) fahrenheitParaCelsius();
        else if(ope == 3) printf("Saindo...\n");
        else printf("Invalido!\n");
    } while(ope != 3);




    printf("\nexercicio 10\n");
    int n;
    
    printf("digite quantos termos da fibonacci: ");
    scanf("%d", &n);
    
    fibonacci(n);




    printf("\nexercicio 11\n");
    int number;
    
    printf("Digite um valor inteiro: ");
    scanf("%d", &number);
    
    int result = verificarValor(number);
    
    if(result == 1) {
        printf("Positivo (retornou %d)\n", result);
    } 
    else if(result == -1) {
        printf("Negativo (retornou %d)\n", result);
    } 
    else {
        printf("Zero (retornou %d)\n", result);
    }

    return 0;
}