#include <stdio.h>
#include <string.h>

int main() {

    printf("exercicio 1\n");
    char string[100];
    int tam = 0;
    
    printf("digite uma string: ");
    scanf("%s", string);

    while(string[tam] != '\0') {
        tam++;
    }
    
    printf("tamanho: %d\n", tam);

    getchar();



    printf("\nexercicio 2\n");
    char texto[100];
    char alvo, subst;

    printf("digite uma string: ");
    fgets(texto, sizeof(texto), stdin);
    
    texto[strcspn(texto, "\n")] = '\0';
    
    printf("digite o caractere alvo: ");
    scanf("%c", &alvo);
    
    printf("digite o caractere substituto: ");
    scanf(" %c", &subst);

    for( int t = 0; texto[t] != '\0'; t++) {
        if(texto[t] == alvo) {
            texto[t] = subst;
        }
    }
    
    printf("\nstring modificada: %s\n", texto);

    getchar();




    printf("\nexercicio 3\n");
    char word[100];
    int w = 0;
    
    printf("digite uma palavra em minusculas: ");
    scanf("%s", word);
    
    while(word[w] != '\0') {
        if(word[w] >= 'a' && word[w] <= 'z') {
            word[w] = word[w] - 32;
        }
        w++;
    }
    
    printf("palavra em maiusculas: %s\n", word);

    getchar();


    

    printf("\nexercicio 4\n");
    char str1[100], str2[100], result[200];
    int i, j;
    
    printf("digite a primeira string: ");
    scanf("%s", str1);
    
    printf("digite a segunda string: ");
    scanf("%s", str2);

    for(i = 0; str1[i] != '\0'; i++) {
        result[i] = str1[i];
    }

    for(j = 0; str2[j] != '\0'; j++) {
        result[i + j] = str2[j];
    }
    
    result[i + j] = '\0';
    
    printf("resultado: %s\n", result);

    getchar();




    printf("\nexercicio 5\n");
    char nome[100], email[100];
    int idade;
    char genero;
    
    printf("nome: ");
    fgets(nome, 100, stdin);
    
    printf("idade: ");
    scanf("%d", &idade);
    
    printf("genero (m/f): ");
    scanf(" %c", &genero); 
    
    printf("email: ");
    scanf("%s", email);

    for(int e = 0; nome[e] != '\0'; e++) {
        if(nome[e] == '\n') nome[e] = '\0';
    }
    
    printf("\n--- cadastro ---\n");
    printf("nome: %s\n", nome);
    printf("idade: %d\n", idade);
    printf("genero: %c\n", genero);
    printf("email: %s\n", email);

    getchar();




    printf("\nexercicio 6\n");
    char palavra[100];
    int p, tamanho = 0, palindromo = 1;
    
    printf("digite uma palavra: ");
    scanf("%s", palavra);

    while(palavra[tamanho] != '\0') {
        tamanho++;
    }

    for(p = 0; p < tamanho / 2; p++) {
        if(palavra[p] != palavra[tamanho - 1 - p]) {
            palindromo = 0;
            break;
        }
    }
    
    if(palindromo == 1) {
        printf("e palindromo!\n");
    } else {
        printf("nao e palindromo.\n");
    }

    getchar();




    printf("\nexercicio 7\n");
    char frase[200];
    int vogais = 0;
    
    printf("digite uma frase: ");
    fgets(frase, 200, stdin);
    
    for(int v = 0; frase[v] != '\0'; v++) {
        char c = frase[v];

        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vogais++;
        }
    }
    
    printf("total de vogais: %d\n", vogais);




    printf("\nexercicio 8\n");
    char text[100];
    int start, end;
    char temp;
    
    printf("digite uma string: ");
    fgets(text, sizeof(text), stdin);
    
    text[strcspn(text, "\n")] = '\0';
    
    start = 0;
    end = strlen(text) - 1;
    
    while(start < end) {
        temp = text[start];
        text[start] = text[end];
        text[end] = temp;
        start++;
        end--;
    }
    
    printf("string invertida: %s\n", text);

    return 0;
}