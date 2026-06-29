#include <stdio.h>
#include <string.h>

struct Aluno{
    int id;
    char nome[200];
    int idade;
    float altura;
};

struct Livro {
    char titulo[100];
    char autor[100];
    int ano;
    float preco;
};

struct Contato {
    char nome[100];
    char telefone[20];
    char email[100];
};

struct Cliente {
    int conta;
    char nome[100];
    float saldo;
};

void depositar(struct Cliente *c, float valor) {
    (*c).saldo += valor;  // ou c->saldo
}

void sacar(struct Cliente *c, float valor) {
    if (valor > (*c).saldo) {
        printf("Saldo insuficiente!\n");
    } else {
        (*c).saldo -= valor;
        printf("Saque realizado!\n");
    }
}

int main() {

    printf("\nexercicio 1\n");
    struct Aluno alunos[3];
    for (int i = 0; i < 3; i++){
        alunos[i].id = i + 1;
        printf("Insira o nome do aluno %d\n", i + 1);
        scanf("%[^\n]", alunos[i].nome);
        printf("Insira o idade do aluno %d\n", i + 1);
        scanf("%d", &alunos[i].idade);
        printf("Insira a altura do aluno %d\n", i + 1);
        scanf("%f", &alunos[i].altura);
        getchar();
    }

    for (int i = 0; i < 3; i++){
        printf("Aluno id %d\n", alunos[i].id);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Altura: %.2f\n", alunos[i].altura);
       
    }




    printf("\nexercicio 2\n");
    struct Livro livros[5];
    
    printf("cadastro de 5 livros\n");
    
    for(int l = 0; l < 5; l++) {
        printf("\nlivro %d\n", l+1);
        
        printf("titulo: ");
        getchar(); // Limpa o buffer
        fgets(livros[l].titulo, sizeof(livros[l].titulo), stdin);
        livros[l].titulo[strcspn(livros[l].titulo, "\n")] = 0;
        
        printf("autor: ");
        fgets(livros[l].autor, sizeof(livros[l].autor), stdin);
        livros[l].autor[strcspn(livros[l].autor, "\n")] = 0;
        
        printf("ano: ");
        scanf("%d", &livros[l].ano);
        
        printf("preco: ");
        scanf("%f", &livros[l].preco);
    }
    
    printf("\nlivros cadastrados\n");
    for(int l = 0; l < 5; l++) {
        printf("\nlivro %d\n", l+1);
        printf("titulo: %s\n", livros[l].titulo);
        printf("autor: %s\n", livros[l].autor);
        printf("ano: %d\n", livros[l].ano);
        printf("preco: R$ %.2f\n", livros[l].preco);
    }




    printf("\nexercicio 3\n");
    struct Contato contatos[100];
    int total = 0, opcao;
    
    do {
        printf("\n1 - adicionar\n2 - listar\n3 - sair\n");
        printf("opcao: ");
        scanf("%d", &opcao);
        getchar();
        
        if (opcao == 1) {
            printf("nome: ");
            fgets(contatos[total].nome, 100, stdin);
            contatos[total].nome[strlen(contatos[total].nome) - 1] = '\0';
            
            printf("telefone: ");
            fgets(contatos[total].telefone, 20, stdin);
            contatos[total].telefone[strlen(contatos[total].telefone) - 1] = '\0';
            
            printf("email: ");
            fgets(contatos[total].email, 100, stdin);
            contatos[total].email[strlen(contatos[total].email) - 1] = '\0';
            
            total++;
            printf("adicionado!\n");
        }
        else if (opcao == 2) {
            if (total == 0) {
                printf("nenhum contato.\n");
            } else {
                for (int c = 0; c < total; c++) {
                    printf("\ncontato %d\n", c+1);
                    printf("nome: %s\n", contatos[c].nome);
                    printf("telefone: %s\n", contatos[c].telefone);
                    printf("email: %s\n", contatos[c].email);
                }
            }
        }
        
    } while (opcao != 3);




    printf("\nexercicio 4\n");
    struct Cliente cliente;
    int op;
    float valor;
    
    printf("numero da conta: ");
    scanf("%d", &cliente.conta);
    getchar();
    
    printf("nome do cliente: ");
    fgets(cliente.nome, 100, stdin);
    cliente.nome[strlen(cliente.nome) - 1] = '\0';
    
    cliente.saldo = 0;
    
    printf("\ncliente: %s\n", cliente.nome);
    printf("conta: %d\n", cliente.conta);
    printf("saldo: R$%.2f\n", cliente.saldo);
    
    do {
        printf("\n1-depositar\n2-Sacar\n3-Sair\n");
        printf("opcao: ");
        scanf("%d", &op);
        
        if (op == 1) {
            printf("valor: R$");
            scanf("%f", &valor);
            depositar(&cliente, valor);
            printf("saldo: R$%.2f\n", cliente.saldo);
        }
        else if (op == 2) {
            printf("valor: R$");
            scanf("%f", &valor);
            sacar(&cliente, valor);
            printf("saldo: R$%.2f\n", cliente.saldo);
        }
        
    } while(op != 3);
    
    return 0;
}