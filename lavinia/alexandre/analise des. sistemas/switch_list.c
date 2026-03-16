#include <stdio.h>

/*Exercício 1: Dias da Semana

Objetivo: Escrever um programa que recebe um número inteiro de 1 a 7 e imprime o dia da semana correspondente.

Instruções:
1.  Leia um número inteiro do usuário.
2.  Utilize a estrutura `switch case` para verificar o número.
3.  Para cada número de 1 a 7, imprima o nome do dia da semana (1 para Domingo, 2 para Segunda, etc.).
4.  Adicione um caso `default` para informar ao usuário que o número inserido é inválido.



Exercício 2: Meses do Ano

Objetivo: Criar um programa que recebe um número de 1 a 12 e informa o nome do mês e quantos dias ele tem.

Instruções:
1.  Leia um número inteiro do usuário.
2.  Use um `switch case` para determinar o mês.
3.  Para os meses com 31 dias (Janeiro, Março, Maio, Julho, Agosto, Outubro, Dezembro), agrupe os `case` para imprimir a mesma mensagem.
4.  Faça o mesmo para os meses com 30 dias (Abril, Junho, Setembro, Novembro).
5.  Trate o mês de Fevereiro separadamente, informando que ele tem 28 ou 29 dias.
6.  Inclua um `default` para números fora do intervalo de 1 a 12.



Exercício 3: Cardápio de Lanchonete

Objetivo: Simular um cardápio de lanchonete onde o usuário escolhe um item pelo código.

Instruções:
1.  Apresente ao usuário um cardápio com códigos e itens (ex: 100 - Cachorro Quente, 101 - Bauru Simples, 102 - Bauru com Ovo, etc.).
2.  Leia o código do item desejado.
3.  Utilize um `switch case` para identificar o item e imprimir o nome e o preço do produto selecionado.
4.  Adicione um caso `default` para código inexistente.



Exercício 4: Classificação de Produto

Objetivo: Escrever um programa que recebe o código de um produto e o classifica em uma categoria.

Instruções:
1.  Leia o código de um produto (número inteiro).
2.  Use `switch case` para classificar o produto de acordo com as seguintes faixas:
*   1 a 10: Alimento não-perecível
*   11 a 20: Alimento perecível
*   21 a 30: Vestuário
*   31 a 40: Eletrônicos
*   Outros: Código inválido
*Dica: Em algumas linguagens, não é possível usar faixas diretamente no `case`. Pesquise como agrupar casos ou usar `if` dentro do `default` se necessário.*



Exercício 5: Operações Matemáticas Simples

Objetivo: Criar uma calculadora de áreas e perímetros de formas geométricas básicas.

Quadrado:
Área: l x l
Perímetro: 4 x l

Retângulo:
Área: b x h
Perímetro: 2 x (b + h)

Triângulo:
Área: (b x h) / 2
Perímetro: soma dos três lados

Círculo:
Área: π x r²
Circunferência (Perímetro): 2 x π x r

Trapézio:
Área:
((B + b) x h) / 2
Perímetro: soma dos quatro lados

*/

int main () {

    /*printf("exercicio 1\n");
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

        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        printf("alimento nao-percivel\n");
        break;

        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        printf("alimento percivel\n");
        break;

        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        printf("vestuario\n");
        break;

        case 31:
        case 32:
        case 33:
        case 34:
        case 35:
        case 36:
        case 37:
        case 38:
        case 39:
        case 40:
        printf("eletronicos\n");
        break;

        default:
        printf("codigo invalido\n");
        break;

    }*/



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
        printf("digite o valor do raio: ");
        scanf("%f", &raio);
        printf("area: %.2f\n", pi * raio * raio);
        printf("circunferencia: %.2f\n", 2 * pi * raio);
        break;

        case 5:
        printf("5 - trapezio\n");
        printf("digite o valor da base maior: ");
        scanf("%f", &basemaior);
        printf("digite o valor da base menor: ");
        scanf("%f", &basemenor);
        printf("digite o valor da altura: ");
        scanf("%f", &altura);
        printf("digite o valor do primeiro lado: ");
        scanf("%f", &lado1);
        printf("digite o valor do segundo lado: ");
        scanf("%f", &lado2);
        printf("digite o valor do terceiro lado: ");
        scanf("%f", &lado3);
        printf("digite o valor do quarto lado: ");
        scanf("%f", &lado4);
        printf("area: %.2f\n", ((basemaior + basemenor) * altura) / 2);
        printf("perimetro: %.2f\n", lado1 + lado2 + lado3 + lado4);
        break;

        default:
        printf("opcao invalida!\n");
        break;
    }

    return 0;
}