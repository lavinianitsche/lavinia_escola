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

        case 1, 3, 5, 7, 8, 10, 12:
        printf("");
    }*/



    printf("\nexercicio 3\n");
    

    return 0;
}