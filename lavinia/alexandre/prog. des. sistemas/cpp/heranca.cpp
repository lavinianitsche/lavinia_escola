#include <iostream>
using namespace std;

// exercicio 1

class Personagem {
protected:
    string nome;
    int nivel;
    int vida;
    int forca;

public:
    Personagem(string nome, int nivel, int vida, int forca) : nome(nome), nivel(nivel), vida(vida), forca(forca) {}

    void atacar() {
        cout << nome << " (nivel " << nivel << ") atacou!" << endl;
    }

    void mostrarPersonagem() {
        cout << "nome: " << nome << " | nivel: " << nivel << " | vida: " << vida << " | forca: " << forca << endl;
    }
};

class Guerreiro : public Personagem {
private:
    int armadura;

public:
    Guerreiro(string nome, int nivel, int vida, int forca, int armadura)
    : Personagem(nome, nivel, vida, forca), armadura(armadura) {}

    void atacar() {
        cout << nome << " atacou com a espada! (bonus de forca fisica: " << forca << " | armadura: " << armadura << ")" << endl;
    }
};

class Mago : public Personagem {
private:
    int magia;

public:
    Mago(string nome, int nivel, int vida, int forca, int magia) : Personagem(nome, nivel, vida, forca), magia(magia) {}

    void atacar() {
        cout << nome << " lancou um feitico! (poder magico: " << magia << ")" << endl;
    }
};

void exercicio1() {
    cout << "\nexercicio 1\n" << endl;

    Guerreiro guerreiro("rei arthur", 10, 150, 80, 50);
    Mago mago("harry potter", 12, 90, 20, 120);

    guerreiro.mostrarPersonagem();
    guerreiro.atacar();

    cout << endl;

    mago.mostrarPersonagem();
    mago.atacar();
}

// exercicio 2

class Item {
protected:
    string nome_item;
    float peso;
    string raridade;

public:
    Item(string nome_item, float peso, string raridade) : nome_item(nome_item), peso(peso), raridade(raridade) {}

    void usar() {
        cout << "usando o item: " << nome_item << " (raridade: " << raridade << ")" << endl;
    }
};

class Arma : public Item {
private:
    int dano;

public:
    Arma(string nome_item, float peso, string raridade, int dano) : Item(nome_item, peso, raridade), dano(dano) {}

    void usar() {
        cout << "equipando " << nome_item << "! dano causado: " << dano << " (raridade: " << raridade << ")" << endl;
    }
};

class Pocao : public Item {
private:
    int cura_pontos;

public:
    Pocao(string nome_item, float peso, string raridade, int cura_pontos) : Item(nome_item, peso, raridade), cura_pontos(cura_pontos) {}

    void usar() {
        cout << "bebendo " << nome_item << "! vida recuperada: " << cura_pontos << " pontos." << endl;
        cout << "pocao foi removida do inventario" << endl;
    }
};

void exercicio2() {
    cout << "\nexercicio 2\n" << endl;

    Arma espada("espada longa", 5.5, "comum", 45);
    Pocao pocao("pocao de vida", 0.5, "rara", 50);

    espada.usar();
    cout << endl;
    pocao.usar();
}

// exercicio 3

class Produto {
protected:
    int id_codigo;
    string nome;
    float preco;
    int quantidade_estoque;

public:
    Produto(int id_codigo, string nome, float preco, int quantidade_estoque) : id_codigo(id_codigo), nome(nome), preco(preco), quantidade_estoque(quantidade_estoque) {}

    void exibir_detalhes() {
        cout << "id: " << id_codigo << " | nome: " << nome << " | preco: R$ " << preco << " | estoque: " << quantidade_estoque << endl;
    }

    float calcular_desconto(float porcentagem) {
        return preco - (preco * porcentagem / 100);
    }
};

class ProdutoPerecivel : public Produto {
private:
    string data_validade;

public:
    ProdutoPerecivel(int id_codigo, string nome, float preco, int quantidade_estoque, string data_validade)
    : Produto(id_codigo, nome, preco, quantidade_estoque), data_validade(data_validade) {}

    float calcular_desconto(float porcentagem, bool perto_vencimento = false) {
        float desconto_final = porcentagem;
        if (perto_vencimento) {
            desconto_final += 10;
            cout << "produto perto do vencimento! bonus de 10% aplicado." << endl;
        }
        return preco - (preco * desconto_final / 100);
    }

    void exibir_detalhes() {
        Produto::exibir_detalhes();
        cout << "validade: " << data_validade << endl;
    }
};

class ProdutoEletronico : public Produto {
private:
    int meses_garantia;

public:
    ProdutoEletronico(int id_codigo, string nome, float preco, int quantidade_estoque, int meses_garantia)
    : Produto(id_codigo, nome, preco, quantidade_estoque), meses_garantia(meses_garantia) {}

    void exibir_detalhes() {
        Produto::exibir_detalhes();
        cout << "garantia: " << meses_garantia << " meses" << endl;
    }
};

void exercicio3() {
    cout << "\nexercicio 3\n" << endl;

    ProdutoPerecivel leite(101, "leite integral", 5.00, 20, "20/10/2026");
    ProdutoEletronico tv(202, "smart tv", 2500.00, 8, 12);

    cout << "produto perecivel" << endl;
    leite.exibir_detalhes();
    cout << "preco com desconto normal (10%): R$ " << leite.calcular_desconto(10) << endl;
    cout << "preco com desconto perto do vencimento: R$ " << leite.calcular_desconto(10, true) << endl;
    cout << endl << "produto eletronico" << endl;
    tv.exibir_detalhes();
}

// exercicio 4

class Funcionario {
protected:
    string cpf;
    string nome;
    float salario_base;

public:
    Funcionario(string cpf, string nome, float salario_base) : cpf(cpf), nome(nome), salario_base(salario_base) {}

    float calcular_salario_liquido() {
        return salario_base;
    }

    void exibir_dados() {
        cout << "nome: " << nome << " | cpf: " << cpf << " | salario base: R$ " << salario_base << endl;
    }
};

class OperadorCaixa : public Funcionario {
private:
    float adicional_quebra_de_caixa;

public:
    OperadorCaixa(string cpf, string nome, float salario_base, float adicional_quebra_de_caixa) 
    : Funcionario(cpf, nome, salario_base), adicional_quebra_de_caixa(adicional_quebra_de_caixa) {}

    float calcular_salario_liquido() {
        return salario_base + adicional_quebra_de_caixa;
    }
};

class Gerente : public Funcionario {
private:
    float bonus_meta_atingida;

public:
    Gerente(string cpf, string nome, float salario_base, float bonus_meta_atingida)
    : Funcionario(cpf, nome, salario_base), bonus_meta_atingida(bonus_meta_atingida) {}

    float calcular_salario_liquido() {
        return salario_base + bonus_meta_atingida;
    }
};

void exercicio4() {
    cout << "\nexercicio 4\n" << endl;

    OperadorCaixa op("111.222.333-44", "carlos", 2000.00, 300.00);
    Gerente ger("555.666.777-88", "mariana", 8000.00, 2500.00);

    cout << "operador de caixa" << endl;
    op.exibir_dados();
    cout << "salario liquido: R$ " << op.calcular_salario_liquido() << endl;

    cout << endl << "gerente" << endl;
    ger.exibir_dados();
    cout << "salario liquido: R$ " << ger.calcular_salario_liquido() << endl;
}

// main

int main() {
    exercicio1();
    exercicio2();
    exercicio3();
    exercicio4();

    return 0;
}