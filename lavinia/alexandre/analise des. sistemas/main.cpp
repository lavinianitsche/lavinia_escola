#include <iostream>
using namespace std;

int main() {

    // int - numeros inteiros:
    // idade, quantidade

    // int idade = 17;
    int idade;
    cout << "digite sua idade: ";
    cin >> idade;
    cout << "voce tem " << idade << " anos" << endl;


    // float & double - numeros decimais:
    // altura, preço

    // float altura = 1.62;
    double altura;
    cout << "digite a sua altura: ";
    cin >> altura;
    cout << "voce tem " << altura << " cm de altura" << endl;


    // char - caractere unico:
    // letra, simbolo

    // char letra;
    // cout << "digite uma letra: ";
    // cin >> letra;
    // cout << "a letra digitada foi: " << letra << endl;


    // bool - true(1) or false(0):
    // sim ou noa

    // bool ligado = true;
    // cout << ligado << endl;
    // cout << "digite 1 para ligado ou 0 para desligado: " << endl;
    // cin >> ligado;
    // cout << ligado << endl;


    // string - palavras, frases:
    // nome, endereço, cidade

    string nome;
    // cout << nome << endl;
    cout << "digite seu nome: ";
    // cin >> nome; (recebe até o espaço)
    getline(cin, nome); //
    cout << nome << endl;

    return 0;
}

/*
    tipos de dados
        tipos de dados definem qual tipo de informação
    uma variável pode armazenar

    variável
        uma variável é um recurso que recebe um tipo
    de informação
*/