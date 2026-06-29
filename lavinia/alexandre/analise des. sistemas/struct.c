#include <stdio.h>
#include <string.h>

struct Aluno{
    int id;
    char nome[200];
    int idade;
    float altura;
};

int main() {

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
    
    return 0;
}