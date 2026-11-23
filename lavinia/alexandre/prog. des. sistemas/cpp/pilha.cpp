#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {

    cout << "exercicio 1" << endl;
    {
        stack<int> pilha;
        int opcao, valor;
        
        do {
            cout << "\n1 - inserir elemento" << endl;
            cout << "2 - ver topo da pilha" << endl;
            cout << "3 - sair do exercicio 1" << endl;
            cout << "escolha: ";
            cin >> opcao;
            
            switch(opcao) {
                case 1:
                    cout << "digite um valor: ";
                    cin >> valor;
                    pilha.push(valor);
                    cout << "valor inserido!" << endl;
                    break;
                case 2:
                    if(!pilha.empty()) {
                        cout << "topo da pilha: " << pilha.top() << endl;
                    } else {
                        cout << "atencao: pilha vazia!" << endl;
                    }
                    break;
                case 3:
                    cout << "saindo do exercicio 1..." << endl;
                    break;
                default:
                    cout << "opcao invalida!" << endl;
            }
        } while(opcao != 3);
    }
    
    cout << "\nexercicio 2" << endl;
    {
        stack<int> pilha;
        int opcao;
        
        pilha.push(10);
        pilha.push(20);
        pilha.push(30);
        
        do {
            cout << "\npilha atual: ";
            if(!pilha.empty()) {
                stack<int> temp = pilha;
                while(!temp.empty()) {
                    cout << temp.top() << " ";
                    temp.pop();
                }
            } else {
                cout << "vazia";
            }
            cout << endl;
            
            cout << "1 - inserir elemento" << endl;
            cout << "2 - remover elemento (pop)" << endl;
            cout << "3 - sair do exercicio 2" << endl;
            cout << "escolha: ";
            cin >> opcao;
            
            switch(opcao) {
                case 1: {
                    int valor;
                    cout << "digite um valor: ";
                    cin >> valor;
                    pilha.push(valor);
                    cout << "valor inserido!" << endl;
                    break;
                }
                case 2:
                    if(!pilha.empty()) {
                        cout << "removendo elemento: " << pilha.top() << endl;
                        pilha.pop();
                    } else {
                        cout << "atencao: nao e possivel remover. vilha vazia!" << endl;
                    }
                    break;
                case 3:
                    cout << "saindo do exercicio 2..." << endl;
                    break;
                default:
                    cout << "opcao invalida!" << endl;
            }
        } while(opcao != 3);
    }
    
    cout << "\nexercicio 3" << endl;
    {
        stack<string> pilhaVoltar;
        stack<string> pilhaAvancar;
        string paginaAtual = "pagina inicial";
        int opcao;
        
        do {
            cout << "\npagina atual: " << paginaAtual << endl;
            cout << "1 - visitar nova pagina" << endl;
            cout << "2 - voltar" << endl;
            cout << "3 - avancar" << endl;
            cout << "4 - sair do exercicio 3" << endl;
            cout << "escolha: ";
            cin >> opcao;
            cin.ignore();
            
            switch(opcao) {
                case 1: {
                    string novaPagina;
                    cout << "digite o nome da pagina: ";
                    getline(cin, novaPagina);
                    
                    pilhaVoltar.push(paginaAtual);
                    paginaAtual = novaPagina;
                    while(!pilhaAvancar.empty()) {
                        pilhaAvancar.pop();
                    }
                    cout << "nova pagina visitada!" << endl;
                    break;
                }
                case 2: {
                    if(!pilhaVoltar.empty()) {
                        pilhaAvancar.push(paginaAtual);
                        paginaAtual = pilhaVoltar.top();
                        pilhaVoltar.pop();
                        cout << "voltando..." << endl;
                    } else {
                        cout << "nao ha paginas para voltar!" << endl;
                    }
                    break;
                }
                case 3: {
                    if(!pilhaAvancar.empty()) {
                        pilhaVoltar.push(paginaAtual);
                        paginaAtual = pilhaAvancar.top();
                        pilhaAvancar.pop();
                        cout << "avancando..." << endl;
                    } else {
                        cout << "nao ha paginas para avancar!" << endl;
                    }
                    break;
                }
                case 4:
                    cout << "saindo do exercicio 3..." << endl;
                    break;
                default:
                    cout << "opcao invalida!" << endl;
            }
            
            cout << "\nhistorico para voltar: ";
            if(pilhaVoltar.empty()) {
                cout << "nenhuma";
            } else {
                stack<string> temp = pilhaVoltar;
                while(!temp.empty()) {
                    cout << temp.top() << " ";
                    temp.pop();
                }
            }
            cout << endl;
            
            cout << "historico para avancar: ";
            if(pilhaAvancar.empty()) {
                cout << "nenhuma";
            } else {
                stack<string> temp = pilhaAvancar;
                while(!temp.empty()) {
                    cout << temp.top() << " ";
                    temp.pop();
                }
            }
            cout << endl;
            
        } while(opcao != 4);
    }
    
    cout << "\nexercicio 4" << endl;
    {
        stack<char> pilha;
        string texto, textoInvertido = "";
        
        cout << "digite uma palavra ou frase: ";
        cin.ignore();
        getline(cin, texto);
        
        for(char c : texto) {
            pilha.push(c);
        }
        
        while(!pilha.empty()) {
            textoInvertido += pilha.top();
            pilha.pop();
        }
        
        cout << "\ntexto original: " << texto << endl;
        cout << "texto invertido: " << textoInvertido << endl;
    }
    
    cout << "\n\nexercicio 5: pilha com extremos rapidos" << endl;
    {
        stack<int> pilha, pilhaMax, pilhaMin;
        int opcao, valor;
        
        auto push = [&](int v) {
            pilha.push(v);
            if(pilhaMax.empty() || v >= pilhaMax.top()) {
                pilhaMax.push(v);
            }
            if(pilhaMin.empty() || v <= pilhaMin.top()) {
                pilhaMin.push(v);
            }
        };
        
        auto pop = [&]() {
            if(pilha.empty()) {
                cout << "erro: pilha vazia!" << endl;
                return;
            }
            if(pilha.top() == pilhaMax.top()) {
                pilhaMax.pop();
            }
            if(pilha.top() == pilhaMin.top()) {
                pilhaMin.pop();
            }
            pilha.pop();
        };
        
        auto getMax = [&]() {
            if(pilhaMax.empty()) {
                cout << "erro: pilha vazia!" << endl;
                return -1;
            }
            return pilhaMax.top();
        };
        
        auto getMin = [&]() {
            if(pilhaMin.empty()) {
                cout << "erro: pilha vazia!" << endl;
                return -1;
            }
            return pilhaMin.top();
        };
        
        do {
            cout << "\n1 - inserir elemento" << endl;
            cout << "2 - remover elemento" << endl;
            cout << "3 - ver topo" << endl;
            cout << "4 - ver maior elemento" << endl;
            cout << "5 - ver menor elemento" << endl;
            cout << "6 - sair do exercicio 5" << endl;
            cout << "escolha: ";
            cin >> opcao;
            
            switch(opcao) {
                case 1:
                    cout << "digite um valor: ";
                    cin >> valor;
                    push(valor);
                    cout << "valor inserido!" << endl;
                    break;
                case 2:
                    if(!pilha.empty()) {
                        cout << "removendo elemento: " << pilha.top() << endl;
                        pop();
                    } else {
                        cout << "erro: Pilha vazia!" << endl;
                    }
                    break;
                case 3:
                    if(!pilha.empty()) {
                        cout << "topo: " << pilha.top() << endl;
                    } else {
                        cout << "pilha vazia!" << endl;
                    }
                    break;
                case 4:
                    if(!pilha.empty()) {
                        cout << "maior elemento: " << getMax() << endl;
                    } else {
                        cout << "pilha vazia!" << endl;
                    }
                    break;
                case 5:
                    if(!pilha.empty()) {
                        cout << "menor elemento: " << getMin() << endl;
                    } else {
                        cout << "pilha vazia!" << endl;
                    }
                    break;
                case 6:
                    cout << "saindo do exercicio 5..." << endl;
                    break;
                default:
                    cout << "opcao invalida!" << endl;
            }
        } while(opcao != 6);
    }
    
    cout << "\nexercicio 6" << endl;
    {
        stack<char> pilhaPrincipal;
        stack<char> pilhaRefazer;
        string texto = "";
        int opcao;
        char letra;
        
        do {
            cout << "\ntexto atual: " << texto << endl;
            cout << "1 - adicionar letra" << endl;
            cout << "2 - desfazer (undo)" << endl;
            cout << "3 - Refazer (redo)" << endl;
            cout << "4 - sair do exercicio 6" << endl;
            cout << "escolha: ";
            cin >> opcao;
            
            switch(opcao) {
                case 1:
                    cout << "digite uma letra: ";
                    cin >> letra;
                    pilhaPrincipal.push(letra);
                    texto += letra;
                    while(!pilhaRefazer.empty()) {
                        pilhaRefazer.pop();
                    }
                    cout << "letra '" << letra << "' adicionada!" << endl;
                    break;
                    
                case 2:
                    if(!pilhaPrincipal.empty()) {
                        char letraRemovida = pilhaPrincipal.top();
                        pilhaPrincipal.pop();
                        pilhaRefazer.push(letraRemovida);
                        texto.pop_back();
                        cout << "desfazendo: removendo '" << letraRemovida << "'" << endl;
                    } else {
                        cout << "atencao: nao ha nada para desfazer!" << endl;
                    }
                    break;
                    
                case 3:
                    if(!pilhaRefazer.empty()) {
                        char letraRefeita = pilhaRefazer.top();
                        pilhaRefazer.pop();
                        pilhaPrincipal.push(letraRefeita);
                        texto += letraRefeita;
                        cout << "refazendo: adicionando '" << letraRefeita << "'" << endl;
                    } else {
                        cout << "atencao: nao ha nada para refazer!" << endl;
                    }
                    break;
                    
                case 4:
                    cout << "saindo do exercicio 6..." << endl;
                    break;
                    
                default:
                    cout << "opcao invalida!" << endl;
            }
            
            cout << "\npilha principal: ";
            if(pilhaPrincipal.empty()) {
                cout << "vazia";
            } else {
                stack<char> temp = pilhaPrincipal;
                while(!temp.empty()) {
                    cout << temp.top() << " ";
                    temp.pop();
                }
            }
            cout << endl;
            
            cout << "pilha de refazer: ";
            if(pilhaRefazer.empty()) {
                cout << "vazia";
            } else {
                stack<char> temp = pilhaRefazer;
                while(!temp.empty()) {
                    cout << temp.top() << " ";
                    temp.pop();
                }
            }
            cout << endl;
            
        } while(opcao != 4);
    }
    

    return 0;
}