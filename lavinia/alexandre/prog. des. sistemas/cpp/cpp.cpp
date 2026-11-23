#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;


int main() {

    printf("\nexercicio 1\n");
    cout << "yeji\n";
    cout << "26 anos\n";

    printf("\nexercicio 2\n");
    cout << 100 << endl;

    printf("\nexercicio 3\n");
    cout << "ye " << "ji" << endl;

    printf("\nexercicio 4\n");
    cout << "bem-vindo ao programa!" << endl;

    printf("\nexercicio 5\n");
    int idade = 26;
    cout << idade << endl;

    printf("\nexercicio 6\n");
    int numero;
    numero = 80;
    cout << numero << endl;
    numero = 150;
    cout << numero << endl;

    printf("\nexercicio 7\n");
    double preco = 9.99;
    cout << "preco: " << preco << endl;

    printf("\nexercicio 8\n");
    char inicial = 'y';
    cout << inicial << endl;

    printf("\nexercicio 9\n");
    string mensagem = "boas ferias!";
    cout << mensagem << endl;

    printf("\nexercicio 10\n");
    bool isTrue = true;
    cout << isTrue << endl;

    printf("\nexercicio 11\n");
    double A = 10, B = 20, C = 30;
    cout << A + B + C << endl;

    printf("\nexercicio 12\n");
    int num1 = 5, num2 = 7;
    cout << num1 * num2 << endl;

    printf("\nexercicio 13\n");
    int maior = 15, menor = 8;
    cout << maior - menor << endl;

    printf("\nexercicio 14\n");
    int number = 7;
    cout << number / 2 << endl;
    cout << number / 2.0 << endl; 

    printf("\nexercicio 15\n");
    double nota1 = 8.5, nota2 = 7.0, nota3 = 9.5;
    double media = (nota1 + nota2 + nota3) / 3;
    cout << "media: " << media << endl;

    printf("\nexercicio 16\n");
    const double GRAVIDADE = 9.81;
    cout << "gravidade: " << GRAVIDADE << endl;

    printf("\nexercicio 17\n");
    string nome = "yeji";
    int age = 26;
    double altura = 1.68;
    
    cout << "nome: " << nome << ", idade: " << age << " anos, altura: " << altura << "m" << endl;

    printf("\nexercicio 18\n");
    const double DOLAR = 5.80;
    double quantidadeDolares = 100.0;
    double valorEmReais = quantidadeDolares * DOLAR;
    
    cout << quantidadeDolares << " dolares equivalem a R$ " << valorEmReais << endl;

    printf("\nexercicio 19\n");
    bool ferias = true;
    cout << "status de ferias: " << ferias << endl;

    printf("\nexercicio 20\n");
    int a = 10, b = 5, c = 3;
    int resultado = a + b - c * 2;
    cout << "resultado: " << resultado << endl;


    return 0;
}