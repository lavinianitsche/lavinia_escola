#include <iostream>
#include <string>
using namespace std;

// ============================================================================
// exercicio 1: produto (supermercado)
// ============================================================================
class produto {
public:
    string nome;
    string codigobarra;
    double preco;
    int quantidadeestoque;
    string categoria;

    void exibirdetalhes() {
        cout << "\n--- detalhes do produto ---" << endl;
        cout << "nome: " << nome << endl;
        cout << "codigo: " << codigobarra << endl;
        cout << "preco: r$ " << preco << endl;
        cout << "estoque: " << quantidadeestoque << " unidades" << endl;
        cout << "categoria: " << categoria << endl;
        cout << "-----------------------------" << endl;
    }

    void atualizarpreco(double novopreco) {
        preco = novopreco;
        cout << "preco do produto " << nome << " atualizado para r$ " << preco << "!" << endl;
    }

    void vender(int quantidade) {
        if (quantidade <= quantidadeestoque) {
            quantidadeestoque = quantidadeestoque - quantidade;
            cout << "venda realizada! " << quantidade << " unidade(s) de " << nome << " vendida(s)." << endl;
        } else {
            cout << "estoque insuficiente para vender " << quantidade << " unidade(s) de " << nome << endl;
        }
    }
};

void interagirexercicio1() {
    produto prod;
    prod.nome = "chocolate";
    prod.codigobarra = "7891";
    prod.preco = 6.50;
    prod.quantidadeestoque = 40;
    prod.categoria = "doces";

    int opcao = -1;
    while (opcao != 0) {
        cout << "\n=== exercicio 1: produto ===" << endl;
        cout << "1. exibir detalhes" << endl;
        cout << "2. vender produto" << endl;
        cout << "3. atualizar preco" << endl;
        cout << "0. voltar ao menu principal" << endl;
        cout << "escolha uma opcao: ";
        cin >> opcao;

        if (opcao == 1) {
            prod.exibirdetalhes();
        } else if (opcao == 2) {
            int qtd;
            cout << "quantidade a vender: ";
            cin >> qtd;
            prod.vender(qtd);
        } else if (opcao == 3) {
            double novop;
            cout << "novo preco: r$ ";
            cin >> novop;
            prod.atualizarpreco(novop);
        }
    }
}

// ============================================================================
// exercicio 2: perfil de rede social
// ============================================================================
class perfilredesocial {
public:
    string username;
    string biografia;
    int seguidores;
    int seguindo;
    bool verificado;

    void exibirperfil() {
        cout << "\n--- perfil de rede social ---" << endl;
        cout << "usuario: @" << username;
        if (verificado) {
            cout << " [verificado]";
        }
        cout << endl;
        cout << "bio: " << biografia << endl;
        cout << "seguidores: " << seguidores << endl;
        cout << "seguindo: " << seguindo << endl;
        cout << "-----------------------------" << endl;
    }

    void ganharseguidor() {
        seguidores = seguidores + 1;
        cout << "@" << username << " ganhou 1 novo seguidor!" << endl;
    }

    void editarbiografia(string novabio) {
        biografia = novabio;
        cout << "biografia de @" << username << " atualizada!" << endl;
    }
};

void interagirexercicio2() {
    perfilredesocial perfil;
    perfil.username = "carlos_tech";
    perfil.biografia = "reviews de tecnologia diariamente!";
    perfil.seguidores = 150000;
    perfil.seguindo = 320;
    perfil.verificado = true;

    int opcao = -1;
    while (opcao != 0) {
        cout << "\n=== exercicio 2: rede social ===" << endl;
        cout << "1. exibir perfil" << endl;
        cout << "2. ganhar seguidor" << endl;
        cout << "3. editar biografia" << endl;
        cout << "0. voltar ao menu principal" << endl;
        cout << "escolha uma opcao: ";
        cin >> opcao;

        if (opcao == 1) {
            perfil.exibirperfil();
        } else if (opcao == 2) {
            perfil.ganharseguidor();
        } else if (opcao == 3) {
            string novabio;
            cout << "digite a nova biografia: ";
            cin.ignore();
            getline(cin, novabio);
            perfil.editarbiografia(novabio);
        }
    }
}

// ============================================================================
// exercicio 3: conta bancaria
// ============================================================================
class contabancaria {
public:
    string titular;
    string numeroconta;
    double saldo;
    double limitechequeespecial;

    void versaldo() {
        cout << "\n--- saldo da conta ---" << endl;
        cout << "titular: " << titular << endl;
        cout << "conta: " << numeroconta << endl;
        cout << "saldo: r$ " << saldo << endl;
        cout << "limite cheque especial: r$ " << limitechequeespecial << endl;
        cout << "total disponivel: r$ " << (saldo + limitechequeespecial) << endl;
        cout << "-----------------------------" << endl;
    }

    void depositar(double valor) {
        saldo = saldo + valor;
        cout << "deposito de r$ " << valor << " realizado na conta de " << titular << "!" << endl;
    }

    void sacar(double valor) {
        if (valor <= (saldo + limitechequeespecial)) {
            saldo = saldo - valor;
            cout << "saque de r$ " << valor << " realizado na conta de " << titular << "!" << endl;
        } else {
            cout << "saldo e limite insuficientes para saque na conta de " << titular << endl;
        }
    }
};

void interagirexercicio3() {
    contabancaria conta;
    conta.titular = "joao silva";
    conta.numeroconta = "1001-x";
    conta.saldo = 1500.00;
    conta.limitechequeespecial = 500.00;

    int opcao = -1;
    while (opcao != 0) {
        cout << "\n=== exercicio 3: conta bancaria ===" << endl;
        cout << "1. ver saldo" << endl;
        cout << "2. depositar" << endl;
        cout << "3. sacar" << endl;
        cout << "0. voltar ao menu principal" << endl;
        cout << "escolha uma opcao: ";
        cin >> opcao;

        if (opcao == 1) {
            conta.versaldo();
        } else if (opcao == 2) {
            double val;
            cout << "valor do deposito: r$ ";
            cin >> val;
            conta.depositar(val);
        } else if (opcao == 3) {
            double val;
            cout << "valor do saque: r$ ";
            cin >> val;
            conta.sacar(val);
        }
    }
}

// ============================================================================
// exercicio 4: carro
// ============================================================================
class carro {
public:
    string marca;
    string modelo;
    int ano;
    double quilometragemtotal;
    double precodiaria;

    void exibirfichatecnica() {
        cout << "\n--- ficha tecnica ---" << endl;
        cout << "carro: " << marca << " " << modelo << " (" << ano << ")" << endl;
        cout << "quilometragem: " << quilometragemtotal << " km" << endl;
        cout << "preco da diaria: r$ " << precodiaria << endl;
        cout << "-----------------------------" << endl;
    }

    void viajar(double distancia) {
        quilometragemtotal = quilometragemtotal + distancia;
        cout << modelo << " viajou " << distancia << " km. nova quilometragem: " << quilometragemtotal << " km." << endl;
    }

    void calcularaluguel(int dias) {
        double valortotal = dias * precodiaria;
        cout << "valor do aluguel de " << modelo << " por " << dias << " dia(s): r$ " << valortotal << endl;
    }
};

void interagirexercicio4() {
    carro c;
    c.marca = "toyota";
    c.modelo = "corolla";
    c.ano = 2022;
    c.quilometragemtotal = 35000.0;
    c.precodiaria = 180.00;

    int opcao = -1;
    while (opcao != 0) {
        cout << "\n=== exercicio 4: carro ===" << endl;
        cout << "1. exibir ficha tecnica" << endl;
        cout << "2. viajar (adicionar km)" << endl;
        cout << "3. calcular valor de aluguel" << endl;
        cout << "0. voltar ao menu principal" << endl;
        cout << "escolha uma opcao: ";
        cin >> opcao;

        if (opcao == 1) {
            c.exibirfichatecnica();
        } else if (opcao == 2) {
            double km;
            cout << "distancia percorrida (km): ";
            cin >> km;
            c.viajar(km);
        } else if (opcao == 3) {
            int dias;
            cout << "quantidade de dias de aluguel: ";
            cin >> dias;
            c.calcularaluguel(dias);
        }
    }
}

// ============================================================================
// exercicio 5: livro
// ============================================================================
class livro {
public:
    string titulo;
    string autor;
    int numeropaginas;
    double preco;
    bool emprestado;

    void mostrarinfo() {
        cout << "\n--- informacoes do livro ---" << endl;
        cout << "titulo: " << titulo << endl;
        cout << "autor: " << autor << endl;
        cout << "paginas: " << numeropaginas << endl;
        cout << "preco: r$ " << preco << endl;
        cout << "status: " << (emprestado ? "emprestado" : "disponivel") << endl;
        cout << "-----------------------------" << endl;
    }

    void emprestar() {
        if (emprestado) {
            cout << "o livro \"" << titulo << "\" ja esta emprestado!" << endl;
        } else {
            emprestado = true;
            cout << "livro \"" << titulo << "\" foi emprestado com sucesso!" << endl;
        }
    }

    void devolver() {
        if (!emprestado) {
            cout << "o livro \"" << titulo << "\" ja estava disponivel!" << endl;
        } else {
            emprestado = false;
            cout << "livro \"" << titulo << "\" foi devolvido!" << endl;
        }
    }
};

void interagirexercicio5() {
    livro l1; l1.titulo = "alice no pais das maravilhas"; l1.autor = "lewis carroll"; l1.numeropaginas = 200; l1.preco = 39.90; l1.emprestado = false;
    livro l2; l2.titulo = "duna"; l2.autor = "frank herbert"; l2.numeropaginas = 680; l2.preco = 79.90; l2.emprestado = false;
    livro l3; l3.titulo = "freddie mercury"; l3.autor = "lesley-ann jones"; l3.numeropaginas = 480; l3.preco = 59.90; l3.emprestado = false;

    int opcao = -1;
    while (opcao != 0) {
        cout << "\n=== exercicio 5: acervo da biblioteca ===" << endl;
        cout << "1. exibir todos os livros" << endl;
        cout << "2. emprestar um livro" << endl;
        cout << "3. devolver um livro" << endl;
        cout << "0. voltar ao menu principal" << endl;
        cout << "escolha uma opcao: ";
        cin >> opcao;

        if (opcao == 1) {
            l1.mostrarinfo();
            l2.mostrarinfo();
            l3.mostrarinfo();
        } else if (opcao == 2 || opcao == 3) {
            int escolha;
            cout << "escolha o livro (1. alice | 2. duna | 3. freddie mercury): ";
            cin >> escolha;

            livro* selecionado = nullptr;
            if (escolha == 1) selecionado = &l1;
            else if (escolha == 2) selecionado = &l2;
            else if (escolha == 3) selecionado = &l3;

            if (selecionado != nullptr) {
                if (opcao == 2) selecionado->emprestar();
                else selecionado->devolver();
            } else {
                cout << "livro invalido!" << endl;
            }
        }
    }
}

// ============================================================================
// exercicio 6: smartphone
// ============================================================================
class smartphone {
public:
    string marca;
    string modelo;
    int armazenamentogb;
    int ramgb;
    int bateria;

    void especificacoes() {
        cout << "\n--- especificacoes ---" << endl;
        cout << "smartphone: " << marca << " " << modelo << endl;
        cout << "armazenamento: " << armazenamentogb << " gb" << endl;
        cout << "ram: " << ramgb << " gb" << endl;
        cout << "bateria: " << bateria << "%" << endl;
        cout << "-----------------------------" << endl;
    }

    void jogar(double horas) {
        int consumo = horas * 15;
        bateria = bateria - consumo;
        if (bateria < 0) bateria = 0;
        cout << "voce jogou por " << horas << " hora(s) no " << modelo << ". bateria atual: " << bateria << "%" << endl;
    }

    void carregar(int porcentagem) {
        bateria = bateria + porcentagem;
        if (bateria > 100) bateria = 100;
        cout << "o " << modelo << " foi carregado. bateria atual: " << bateria << "%" << endl;
    }
};

void interagirexercicio6() {
    smartphone premium; premium.marca = "samsung"; premium.modelo = "galaxy s24 ultra"; premium.armazenamentogb = 512; premium.ramgb = 12; premium.bateria = 85;
    smartphone inter; inter.marca = "motorola"; inter.modelo = "moto g84"; inter.armazenamentogb = 256; inter.ramgb = 8; inter.bateria = 50;
    smartphone entrada; entrada.marca = "xiaomi"; entrada.modelo = "redmi a3"; entrada.armazenamentogb = 64; entrada.ramgb = 4; entrada.bateria = 30;

    int opcao = -1;
    while (opcao != 0) {
        cout << "\n=== exercicio 6: smartphones ===" << endl;
        cout << "1. exibir todos os celulares" << endl;
        cout << "2. jogar em um celular" << endl;
        cout << "3. carregar um celular" << endl;
        cout << "0. voltar ao menu principal" << endl;
        cout << "escolha uma opcao: ";
        cin >> opcao;

        if (opcao == 1) {
            premium.especificacoes();
            inter.especificacoes();
            entrada.especificacoes();
        } else if (opcao == 2 || opcao == 3) {
            int escolha;
            cout << "escolha o celular (1. premium | 2. intermediario | 3. entrada): ";
            cin >> escolha;

            smartphone* s = nullptr;
            if (escolha == 1) s = &premium;
            else if (escolha == 2) s = &inter;
            else if (escolha == 3) s = &entrada;

            if (s != nullptr) {
                if (opcao == 2) {
                    double h;
                    cout << "horas de jogatina: ";
                    cin >> h;
                    s->jogar(h);
                } else {
                    int pct;
                    cout << "porcentagem de carga: ";
                    cin >> pct;
                    s->carregar(pct);
                }
            } else {
                cout << "celular invalido!" << endl;
            }
        }
    }
}

// ============================================================================
// exercicio 7: item de cardapio
// ============================================================================
class itemcardapio {
public:
    string nomeprato;
    double preco;
    int tempopreparo;
    int calorias;
    bool vegetariano;

    void exibiritem() {
        cout << "\n--- detalhes do prato ---" << endl;
        cout << "prato: " << nomeprato;
        if (vegetariano) {
            cout << " [vegetariano]";
        }
        cout << endl;
        cout << "preco: r$ " << preco << endl;
        cout << "tempo de preparo: " << tempopreparo << " min" << endl;
        cout << "calorias: " << calorias << " kcal" << endl;
        cout << "-----------------------------" << endl;
    }

    void aplicardesconto(double porcentagem) {
        preco = preco - (preco * (porcentagem / 100.0));
        cout << "desconto de " << porcentagem << "% aplicado no prato " << nomeprato << "!" << endl;
    }

    void alterartempopreparo(int novotempo) {
        tempopreparo = novotempo;
        cout << "tempo de preparo de " << nomeprato << " alterado para " << tempopreparo << " min!" << endl;
    }
};

void interagirexercicio7() {
    itemcardapio h; h.nomeprato = "hamburguer artesanal"; h.preco = 35.00; h.tempopreparo = 25; h.calorias = 850; h.vegetariano = false;
    itemcardapio s; s.nomeprato = "salada caesar"; s.preco = 28.00; s.tempopreparo = 12; s.calorias = 320; s.vegetariano = true;
    itemcardapio p; p.nomeprato = "pizza margherita"; p.preco = 48.00; p.tempopreparo = 20; p.calorias = 750; p.vegetariano = true;
    itemcardapio b; b.nomeprato = "batata frita"; b.preco = 22.00; b.tempopreparo = 15; b.calorias = 450; b.vegetariano = true;

    int opcao = -1;
    while (opcao != 0) {
        cout << "\n=== exercicio 7: cardapio ===" << endl;
        cout << "1. exibir cardapio completo" << endl;
        cout << "2. aplicar desconto em um prato" << endl;
        cout << "3. alterar tempo de preparo" << endl;
        cout << "0. voltar ao menu principal" << endl;
        cout << "escolha uma opcao: ";
        cin >> opcao;

        if (opcao == 1) {
            h.exibiritem();
            s.exibiritem();
            p.exibiritem();
            b.exibiritem();
        } else if (opcao == 2 || opcao == 3) {
            int escolha;
            cout << "escolha o prato (1. hamburguer | 2. salada | 3. pizza | 4. batata): ";
            cin >> escolha;

            itemcardapio* item = nullptr;
            if (escolha == 1) item = &h;
            else if (escolha == 2) item = &s;
            else if (escolha == 3) item = &p;
            else if (escolha == 4) item = &b;

            if (item != nullptr) {
                if (opcao == 2) {
                    double pct;
                    cout << "porcentagem de desconto: ";
                    cin >> pct;
                    item->aplicardesconto(pct);
                } else {
                    int tempo;
                    cout << "novo tempo de preparo (minutos): ";
                    cin >> tempo;
                    item->alterartempopreparo(tempo);
                }
            } else {
                cout << "prato invalido!" << endl;
            }
        }
    }
}

// ============================================================================
// menu principal
// ============================================================================
int main() {
    int escolhamenu = -1;

    while (escolhamenu != 0) {
        cout << "\n========================================" << endl;
        cout << "        menu de exercicios c++          " << endl;
        cout << "========================================" << endl;
        cout << "1. exercicio 1 - produto (supermercado)" << endl;
        cout << "2. exercicio 2 - perfil de rede social" << endl;
        cout << "3. exercicio 3 - conta bancaria" << endl;
        cout << "4. exercicio 4 - carro" << endl;
        cout << "5. exercicio 5 - livro (biblioteca)" << endl;
        cout << "6. exercicio 6 - smartphone" << endl;
        cout << "7. exercicio 7 - item de cardapio" << endl;
        cout << "0. sair do programa" << endl;
        cout << "escolha qual exercicio deseja testar: ";
        cin >> escolhamenu;

        if (escolhamenu == 1) interagirexercicio1();
        else if (escolhamenu == 2) interagirexercicio2();
        else if (escolhamenu == 3) interagirexercicio3();
        else if (escolhamenu == 4) interagirexercicio4();
        else if (escolhamenu == 5) interagirexercicio5();
        else if (escolhamenu == 6) interagirexercicio6();
        else if (escolhamenu == 7) interagirexercicio7();
        else if (escolhamenu == 0) cout << "\nsaindo do programa..." << endl;
        else cout << "\nopcao invalida! tente novamente." << endl;
    }

    return 0;
}