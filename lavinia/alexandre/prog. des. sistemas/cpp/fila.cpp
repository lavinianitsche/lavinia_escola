#include <iostream>
#include <queue>
using namespace std;

int main() {
    int opcao;
    string nome;
    
    cout << "exercicio 1" << endl;
    queue<string> filaBanco;
    cout << "digite o nome de 5 clientes:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "cliente " << i+1 << ": ";
        cin >> nome;
        filaBanco.push(nome);
    }
    
    cout << "\natendendo clientes:" << endl;
    int atendidos = 1;
    while (!filaBanco.empty()) {
        cout << "atendendo cliente " << atendidos++ << ": " << filaBanco.front() << endl;
        filaBanco.pop();
    }
    cout << "todos os clientes foram atendidos!" << endl << endl;
    



    cout << "exercicio 2" << endl;
    queue<string> filaSupermercado;
    do {
        cout << "\n1 - adicionar cliente" << endl;
        cout << "2 - atender proximo cliente" << endl;
        cout << "3 - mostrar quantos esperam" << endl;
        cout << "0 - voltar" << endl;
        cout << "opcao: ";
        cin >> opcao;
        
        switch(opcao) {
            case 1:
                cout << "nome do cliente: ";
                cin >> nome;
                filaSupermercado.push(nome);
                cout << nome << " adicionado a fila!" << endl;
                break;
            case 2:
                if (!filaSupermercado.empty()) {
                    cout << "atendendo: " << filaSupermercado.front() << endl;
                    filaSupermercado.pop();
                } else {
                    cout << "fila vazia!" << endl;
                }
                break;
            case 3:
                cout << "pessoas esperando: " << filaSupermercado.size() << endl;
                break;
        }
    } while (opcao != 0);
    



    cout << "\nexercicio 3" << endl;
    queue<string> filaCantina;
    do {
        cout << "\n1 - adicionar aluno" << endl;
        cout << "2 - atender primeiro aluno" << endl;
        cout << "3 - mostrar quantos esperam" << endl;
        cout << "0 - voltar" << endl;
        cout << "opcao: ";
        cin >> opcao;
        
        switch(opcao) {
            case 1:
                cout << "nome do aluno: ";
                cin >> nome;
                filaCantina.push(nome);
                cout << nome << " entrou na fila!" << endl;
                break;
            case 2:
                if (!filaCantina.empty()) {
                    cout << "atendendo: " << filaCantina.front() << endl;
                    filaCantina.pop();
                } else {
                    cout << "fila vazia!" << endl;
                }
                break;
            case 3:
                cout << "alunos esperando: " << filaCantina.size() << endl;
                break;
        }
    } while (opcao != 0);
    



    cout << "\nexercicio 4" << endl;
    queue<string> filaRestaurante;
    const int MESAS = 5;
    do {
        cout << "\n1 - adicionar cliente a espera" << endl;
        cout << "2 - liberar mesa (chamar proximo)" << endl;
        cout << "3 - mostrar situacao" << endl;
        cout << "0 - voltar" << endl;
        cout << "opcao: ";
        cin >> opcao;
        
        switch(opcao) {
            case 1:
                if (filaRestaurante.size() < MESAS) {
                    cout << "nome do cliente: ";
                    cin >> nome;
                    filaRestaurante.push(nome);
                    cout << nome << " entrou na fila de espera!" << endl;
                } else {
                    cout << "todas as mesas estao ocupadas!" << endl;
                }
                break;
            case 2:
                if (!filaRestaurante.empty()) {
                    cout << "chamando: " << filaRestaurante.front() << " para a mesa!" << endl;
                    filaRestaurante.pop();
                } else {
                    cout << "nenhum cliente esperando!" << endl;
                }
                break;
            case 3:
                cout << "clientes esperando: " << filaRestaurante.size() << endl;
                cout << "mesas ocupadas: " << (MESAS - filaRestaurante.size()) << endl;
                break;
        }
    } while (opcao != 0);
    



    cout << "\nexercicio 5" << endl;
    queue<string> filaMedico;
    do {
        cout << "\n1 - cadastrar paciente" << endl;
        cout << "2 - atender proximo paciente" << endl;
        cout << "3 - mostrar proximo paciente" << endl;
        cout << "4 - mostrar total de pacientes" << endl;
        cout << "0 - voltar" << endl;
        cout << "opcao: ";
        cin >> opcao;
        
        switch(opcao) {
            case 1:
                cout << "nome do paciente: ";
                cin >> nome;
                filaMedico.push(nome);
                cout << nome << " cadastrado!" << endl;
                break;
            case 2:
                if (!filaMedico.empty()) {
                    cout << "atendendo: " << filaMedico.front() << endl;
                    filaMedico.pop();
                } else {
                    cout << "fila vazia!" << endl;
                }
                break;
            case 3:
                if (!filaMedico.empty()) {
                    cout << "proximo paciente: " << filaMedico.front() << endl;
                } else {
                    cout << "fila vazia!" << endl;
                }
                break;
            case 4:
                cout << "pacientes esperando: " << filaMedico.size() << endl;
                break;
        }
    } while (opcao != 0);
    



    cout << "\nexercicio 6" << endl;
    queue<string> filaImpressora;
    do {
        cout << "\n1 - enviar documento" << endl;
        cout << "2 - imprimir proximo documento" << endl;
        cout << "3 - mostrar fila de impressao" << endl;
        cout << "0 - voltar" << endl;
        cout << "opcao: ";
        cin >> opcao;
        
        switch(opcao) {
            case 1:
                cout << "nome do documento: ";
                cin >> nome;
                filaImpressora.push(nome);
                cout << nome << " enviado para impressao!" << endl;
                break;
            case 2:
                if (!filaImpressora.empty()) {
                    cout << "imprimindo: " << filaImpressora.front() << endl;
                    filaImpressora.pop();
                } else {
                    cout << "nenhum documento na fila!" << endl;
                }
                break;
            case 3:
                if (filaImpressora.empty()) {
                    cout << "fila vazia!" << endl;
                } else {
                    cout << "documentos na fila: " << filaImpressora.size() << endl;
                }
                break;
        }
    } while (opcao != 0);
    



    cout << "\nexercicio 7" << endl;
    queue<string> filaOnibus;
    do {
        cout << "\n1 - passageiro chegou" << endl;
        cout << "2 - embarque (proximo passageiro)" << endl;
        cout << "3 - mostrar proximo a embarcar" << endl;
        cout << "4 - mostrar total esperando" << endl;
        cout << "0 - voltar" << endl;
        cout << "opcao: ";
        cin >> opcao;
        
        switch(opcao) {
            case 1:
                cout << "nome do passageiro: ";
                cin >> nome;
                filaOnibus.push(nome);
                cout << nome << " chegou e entrou na fila!" << endl;
                break;
            case 2:
                if (!filaOnibus.empty()) {
                    cout << "embarque: " << filaOnibus.front() << endl;
                    filaOnibus.pop();
                } else {
                    cout << "nenhum passageiro esperando!" << endl;
                }
                break;
            case 3:
                if (!filaOnibus.empty()) {
                    cout << "proximo a embarcar: " << filaOnibus.front() << endl;
                } else {
                    cout << "fila vazia!" << endl;
                }
                break;
            case 4:
                cout << "passageiros esperando: " << filaOnibus.size() << endl;
                break;
        }
    } while (opcao != 0);
    



    cout << "\nexercicio 8" << endl;
    queue<string> filaCinema;
    do {
        cout << "\n1 - adicionar pessoa" << endl;
        cout << "2 - atender primeira pessoa" << endl;
        cout << "3 - mostrar quem e o proximo" << endl;
        cout << "4 - mostrar quantos esperam" << endl;
        cout << "0 - voltar" << endl;
        cout << "opcao: ";
        cin >> opcao;
        
        switch(opcao) {
            case 1:
                cout << "nome: ";
                cin >> nome;
                filaCinema.push(nome);
                cout << nome << " entrou na fila!" << endl;
                break;
            case 2:
                if (!filaCinema.empty()) {
                    cout << "atendendo: " << filaCinema.front() << endl;
                    filaCinema.pop();
                } else {
                    cout << "fila vazia!" << endl;
                }
                break;
            case 3:
                if (!filaCinema.empty()) {
                    cout << "proximo: " << filaCinema.front() << endl;
                } else {
                    cout << "fila vazia!" << endl;
                }
                break;
            case 4:
                cout << "pessoas esperando: " << filaCinema.size() << endl;
                break;
        }
    } while (opcao != 0);
    
    cout << "\nprograma finalizado!" << endl;
    return 0;
}