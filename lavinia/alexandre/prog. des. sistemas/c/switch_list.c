#include <stdio.h>

    int main(){

    printf("exercicio 1\n");
    int day;
    printf("digite um numero entre 1 e 7: \n");
    scanf ("%d", &day);

    switch (day) {
        case 1:
        printf("domingo\n");
        break;

        case 2:
        printf("segunda\n");
        break;

        case 3:
        printf("terca\n");
        break;

        case 4:
        printf("quarta\n");
        break;

        case 5:
        printf("quinta\n");
        break;

        case 6:
        printf("sexta\n");
        break;

        case 7:
        printf("sabado\n");
        break;

        default:
        printf("numero invalido\n");
        break;
    }
        


    printf("\nexercicio 2\n");
    int mes;
    printf("digite um numero de 1 a 12: \n");
    scanf("%d", &mes);

    switch (mes) {

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("este mes tem 31 dias\n");
        break;
        
        case 4:
        case 6:
        case 9:
        case 11:
        printf("este mes tem 30 dias\n");
        break;
        
        case 2:
        printf("este mes tem 28 ou 29 dias\n");
        break;

        default:
        printf("numero invalido\n");
        break;

    }
    


    printf("\nexercicio 3\n");
    int codigo;

    printf("cardapio:\n");
    printf("1 - pao de queijo\n");
    printf("2 - salgado\n");
    printf("3 - suco kapo\n");
    printf("4 - capuccino\n");
    printf("5 - refrigerante lata\n");
    printf("6 - sanduiche\n");
    printf("7 - sonho doce de leite\n");
    printf("8 - agua (com ou sem gas)\n");

    printf("digite o codigo do produto desejado: \n");
    scanf("%d", &codigo);

    switch (codigo) {

        case 1:
        printf("pao de queijo - R$3,00\n");
        break;

        case 2:
        printf("salgado - R$6,00\n");
        break;

        case 3:
        printf("suco kapo - R$2,00\n");
        break;

        case 4:
        printf("capuccino - R$5,00\n");
        break;

        case 5:
        printf("refrigerante lata - R$4,00\n");
        break;

        case 6:
        printf("sanduiche - R$7,00\n");
        break;

        case 7:
        printf("sonho doce de leite - R$3,50\n");
        break;

        case 8:
        printf("agua (com ou sem gas) - R$1,50\n");
        break;

        default:
        printf("codigo invalido\n");
        break;

    }



    printf("\nexercicio 4\n");
    int produto;
    printf("digite um codigo de 1 a 40: \n");
    scanf("%d", &produto);

    switch (produto) {

        case 1 ... 10:
        printf("alimento nao-perecivel\n");
        break;

        case 11 ... 20:
        printf("alimento perecivel\n");
        break;

        case 21 ... 30:
        printf("vestuario\n");
        break;

        case 31 ... 40:
        printf("eletronicos\n");
        break;

        default:
        printf("codigo invalido\n");
        break;

    }



    printf("\nexercicio 5\n");
    int forma;
    float pi = 3.14;
    float lado, base, altura, raio, basemenor, basemaior, lado1, lado2, lado3, lado4;

    printf("formas geometricas:\n");
    printf("1 - quadrado\n");
    printf("2 - retangulo\n");
    printf("3 - triangulo\n");
    printf("4 - circulo\n");
    printf("5 - trapezio\n");
    
    printf("digite o numero da forma: \n");
    scanf("%d", &forma);
    
    switch (forma) {
        
        case 1:
        printf("1 - quadrado\n");
        printf("digite o valor do lado: \n");
        scanf("%f", &lado);
        printf("area: %.2f\n", lado * lado);
        printf("perimetro: %.2f\n", 4 * lado);
        break;
        
        case 2:
        printf("2 - retangulo\n");
        printf("digite o valor da base: \n");
        scanf("%f", &base);
        printf("digite o valor da altura: \n");
        scanf("%f", &altura);
        printf("area: %.2f\n", base * altura);
        printf("perimetro: %.2f\n", 2 * (base + altura));
        break;
        
        case 3:
        printf("3 - triangulo\n");
        printf("digite o valor da base: \n");
        scanf("%f", &base);
        printf("digite o valor da altura: \n");
        scanf("%f", &altura);
        printf("digite o valor do primeiro lado: \n");
        scanf("%f", &lado1);
        printf("digite o valor do segundo lado: \n");
        scanf("%f", &lado2);
        printf("digite o valor do terceiro lado: \n");
        scanf("%f", &lado3);
        printf("area: %.2f\n", (base * altura) / 2);
        printf("perimetro: %.2f\n", lado1 + lado2 + lado3);
        break;
        
        case 4:
        printf("4 - circulo\n");
        printf("digite o valor do raio: \n");
        scanf("%f", &raio);
        printf("area: %.2f\n", pi * raio * raio);
        printf("circunferencia: %.2f\n", 2 * pi * raio);
        break;

        case 5:
        printf("5 - trapezio\n");
        printf("digite o valor da base maior: \n");
        scanf("%f", &basemaior);
        printf("digite o valor da base menor: \n");
        scanf("%f", &basemenor);
        printf("digite o valor da altura: \n");
        scanf("%f", &altura);
        printf("digite o valor do primeiro lado: \n");
        scanf("%f", &lado1);
        printf("digite o valor do segundo lado: \n");
        scanf("%f", &lado2);
        printf("digite o valor do terceiro lado: \n");
        scanf("%f", &lado3);
        printf("digite o valor do quarto lado: \n");
        scanf("%f", &lado4);
        printf("area: %.2f\n", ((basemaior + basemenor) * altura) / 2);
        printf("perimetro: %.2f\n", lado1 + lado2 + lado3 + lado4);
        break;

        default:
        printf("opcao invalida\n");
        break;
    }

    return 0;
}