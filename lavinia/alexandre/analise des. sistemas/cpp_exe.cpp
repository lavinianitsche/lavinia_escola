#include <iostream>
#include <string>
using namespace std;

int main() {
    
    // exe 1
    cout << "\nexercicio 1" << endl;
    string nome;
    cout << "digite seu nome: ";
    cin >> nome;
    cout << "bem-vindo(a), " << nome << "!" << endl;
    
    // exe 2
    cout << "\nexercicio 2" << endl;
    int idade;
    cout << "digite sua idade: ";
    cin >> idade;
    cout << "voce tem " << idade << " anos" << endl;
    
    // exe 3
    cout << "\nexercicio 3" << endl;
    float altura;
    cout << "digite sua altura: ";
    cin >> altura;
    cout << "voce tem " << altura << " metros de altura" << endl;
    
    // exe 4
    cout << "\nexercicio 4" << endl;
    double salario;
    cout << "digite seu salario: R$ ";
    cin >> salario;
    cout << "seu salario e R$ " << salario << endl;
    
    // exe 5
    cout << "\nexercicio 5" << endl;
    char letra;
    cout << "digite a letra do seu primeiro nome: ";
    cin >> letra;
    cout << "a letra informada foi: " << letra << endl;
    
    // exe 6
    cout << "\nexercicio 6" << endl;
    int aprovado;
    cout << "digite 1 para aprovado ou 0 para reprovado: ";
    cin >> aprovado;
    cout << "valor informado: " << aprovado << endl;
    
    // exe 7
    cout << "\nexercicio 7" << endl;
    string nome7;
    int idade7;
    float altura7;
    
    cout << "digite seu nome: ";
    cin >> nome7;
    cout << "digite sua idade: ";
    cin >> idade7;
    cout << "digite sua altura: ";
    cin >> altura7;
    
    cout << "\ndados cadastrados" << endl;
    cout << "nome: " << nome7 << endl;
    cout << "idade: " << idade7 << " anos" << endl;
    cout << "altura: " << altura7 << " metros" << endl;
    
    // exe 8
    cout << "\nexercicio 8" << endl;
    string nomeCompleto8;
    int idade8;
    float altura8;
    double salario8;
    char sexo8;
    
    cout << "digite seu nome completo: ";
    cin.ignore(); // Limpa o buffer
    getline(cin, nomeCompleto8);
    cout << "digite sua idade: ";
    cin >> idade8;
    cout << "digite sua altura: ";
    cin >> altura8;
    cout << "digite seu salario: R$ ";
    cin >> salario8;
    cout << "digite seu sexo (m/f): ";
    cin >> sexo8;
    
    cout << "\ndados cadastrados" << endl;
    cout << "nome: " << nomeCompleto8 << endl;
    cout << "idade: " << idade8 << " anos" << endl;
    cout << "altura: " << altura8 << " metros" << endl;
    cout << "salario: R$ " << salario8 << endl;
    cout << "sexo: " << sexo8 << endl;
    
    // exe 9
    cout << "\nexercicio 9" << endl;
    string modelo;
    int ano;
    double valor;
    char categoria;
    
    cout << "digite o modelo do veiculo: ";
    cin >> modelo;
    cout << "digite o ano de fabricacao: ";
    cin >> ano;
    cout << "digite o valor do veiculo: R$ ";
    cin >> valor;
    cout << "digite a categoria (a, b ou c): ";
    cin >> categoria;
    
    cout << "\ndaos do veiculo" << endl;
    cout << "modelo: " << modelo << endl;
    cout << "ano: " << ano << endl;
    cout << "valor: R$ " << valor << endl;
    cout << "categoria: " << categoria << endl;
    
    // exe 10
    cout << "\nexercicio 10" << endl;
    string nomeAluno;
    int idadeAluno;
    float alturaAluno;
    double mediaFinal;
    char turma;
    int matriculado;
    
    cout << "digite o nome completo do aluno: ";
    cin.ignore();
    getline(cin, nomeAluno);
    cout << "digite a idade: ";
    cin >> idadeAluno;
    cout << "digite a altura: ";
    cin >> alturaAluno;
    cout << "digite a media final: ";
    cin >> mediaFinal;
    cout << "digite a turma (ex: a, b, c): ";
    cin >> turma;
    cout << "esta matriculado? (1 para sim, 0 para nao): ";
    cin >> matriculado;
    
    cout << "\nperfil do aluno" << endl;
    cout << "nome completo: " << nomeAluno << endl;
    cout << "idade: " << idadeAluno << " anos" << endl;
    cout << "altura: " << alturaAluno << " metros" << endl;
    cout << "media final: " << mediaFinal << endl;
    cout << "turma: " << turma << endl;
    cout << "matriculado: " << (matriculado == 1 ? "sim" : "nao") << endl;
    
    return 0;
}