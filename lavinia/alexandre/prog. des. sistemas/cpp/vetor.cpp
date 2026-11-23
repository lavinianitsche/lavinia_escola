#include <iostream>
#include <vector>
using namespace std;

int main(){
    cout << "\nexercicio 1" << endl;
    vector<string> listaCompras;
    string item;
    
    cout << "digite 5 itens de supermercado:" << endl;
    for(int i = 0; i < 5; i++){
        cout << "Item " << i+1 << ": ";
        getline(cin, item);
        listaCompras.push_back(item);
    }
    
    cout << "\nlista de compras:" << endl;
    for(int i = 0; i < listaCompras.size(); i++){
        cout << i+1 << ". " << listaCompras[i] << endl;
    }
    


    cout << "\nexercicio 2" << endl;
    vector<string> fila = {"joao", "maria", "pedro", "ana"};
    
    cout << "fila inicial:" << endl;
    for(string cliente : fila){
        cout << cliente << endl;
    }
    
    cout << "\ncliente VIP chegou!" << endl;
    fila.insert(fila.begin() + 1, "VIP");
    
    cout << "fila apos insercao do VIP:" << endl;
    for(string cliente : fila){
        cout << cliente << endl;
    }
    
    cout << "\natendendo o ultimo cliente..." << endl;
    cout << "cliente atendido: " << fila.back() << endl;
    fila.pop_back();
    
    cout << "fila final:" << endl;
    for(string cliente : fila){
        cout << cliente << endl;
    }
    


    cout << "\nexercicio 3" << endl;
    vector<string> nomes = {"ana", "carlos", "beto", "diana"};
    
    cout << "lista original:" << endl;
    for(string nome : nomes){
        cout << nome << endl;
    }
    
    *(nomes.begin() + 2) = "roberto";
    
    cout << "\nlista corrigida:" << endl;
    for(string nome : nomes){
        cout << nome << endl;
    }
    


    cout << "\nexercicio 4" << endl;
    vector<string> lista;
    string elemento;
    char continuar;
    
    do{
        cout << "digite um elemento: ";
        getline(cin, elemento);
        lista.push_back(elemento);
        
        cout << "ultimo elemento usando back(): " << lista.back() << endl;
        cout << "ultimo elemento usando end(): " << *(lista.end() - 1) << endl;
        
        cout << "deseja adicionar mais um? (s/n): ";
        cin >> continuar;
        cin.ignore();
    } while(continuar == 's' || continuar == 'S');
    


    cout << "\nexercicio 5" << endl;
    vector<string> produtos = {"arroz", "feijao", "macarrao", "acucar", "cafe"};
    
    cout << "produtos em estoque: " << produtos.size() << endl;
    cout << "lista de produtos:" << endl;
    for(string produto : produtos){
        cout << "- " << produto << endl;
    }
    
    cout << "\nrealizando venda total..." << endl;
    produtos.clear();
    
    cout << "produtos em estoque apos limpeza: " << produtos.size() << endl;
    
    if(produtos.size() == 0){
        cout << "estoque vazio!" << endl;
    }
    


    cout << "\nexercicio 6" << endl;
    vector<float> notas;
    float nota, soma = 0;
    bool notaValida;
    
    cout << "digite as 4 notas do aluno (0 a 10):" << endl;
    for(int i = 0; i < 4; i++){
        do {
            cout << "nota " << i+1 << ": ";
            cin >> nota;
            
            if(nota >= 0 && nota <= 10){
                notaValida = true;
                notas.push_back(nota);
                soma += nota;
            } else {
                notaValida = false;
                cout << "nota invalida! digite um valor entre 0 e 10." << endl;
            }
        } while(!notaValida);
    }
    
    float media = soma / notas.size();
    
    cout << "\nnotas: ";
    for(int i = 0; i < notas.size(); i++){
        cout << notas[i];
        if(i < notas.size() - 1) cout << ", ";
    }
    cout << endl;
    cout << "soma das notas: " << soma << endl;
    cout << "quantidade de notas: " << notas.size() << endl;
    cout << "media: " << media << endl;
    
    if(media >= 7.0){
        cout << "aluno aprovado!" << endl;
    } else if(media >= 5.0){
        cout << "aluno em recuperacao!" << endl;
    } else {
        cout << "aluno reprovado!" << endl;
    }
    


    cout << "\nexercicio 7" << endl;
    vector<string> cidades = {"sao paulo", "rio de janeiro", "belo horizonte", 
                              "curitiba", "porto alegre", "salvador"};
    
    cout << "cidades cadastradas:" << endl;
    for(int i = 0; i < cidades.size(); i++){
        cout << i+1 << ". " << cidades[i] << endl;
    }
    
    string cidadeBuscada;
    bool encontrada = false;
    
    cout << "\ndigite o nome de uma cidade para buscar: ";
    cin.ignore(); // Limpa o buffer antes do getline
    getline(cin, cidadeBuscada);
    
    for(int i = 0; i < cidades.size(); i++){
        if(cidades[i] == cidadeBuscada){
            encontrada = true;
            break;
        }
    }
    
    if(encontrada){
        cout << cidadeBuscada << " esta na lista de cidades!" << endl;
    } else {
        cout << cidadeBuscada << " NAO esta na lista de cidades!" << endl;
    }
    


    cout << "\nexercicio 8" << endl;
    vector<string> original = {"A", "B", "C", "D", "E"};
    vector<string> invertido;
    
    cout << "vetor original: ";
    for(string elem : original){
        cout << elem << " ";
    }
    cout << endl;
    
    for(int i = original.size() - 1; i >= 0; i--){
        invertido.push_back(original[i]);
    }
    
    cout << "vetor invertido: ";
    for(string elem : invertido){
        cout << elem << " ";
    }
    cout << endl;
    
    return 0;
}