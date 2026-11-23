// trabalho de string - strrchr() e strspn()

// strrchr()

// A função strrchr procura a última vez que um caractere aparece numa string.
// Se encontrar, ela devolve o pedaço da string que começa naquele caractere. 
// Se não encontrar, devolve vazio.


// strspn()

// A strspn retorna o número de caracteres no início da primeira string que fazem parte da segunda string. 
// A contagem para assim que encontra um caractere não permitido.

#include <stdio.h>
#include <string.h>

int main() {

    printf("exemplo de strrchr()");
    int caractere = 'c';
    char fonte[] = "tu te tornas eternamente responsavel por aquilo que cativas";
    
    printf("localizar a ultima letra '%c' na frase: %s\n", caractere, fonte);
    
    char *resultado = strrchr(fonte, caractere);
    
    if(resultado != NULL) {
        printf("caractere '%c' encontrado\n", caractere);
        printf("string a partir da ultima ocorrencia: %s\n", resultado);
    } else {
        printf("\ncaractere '%c' nao encontrado\n", caractere);
    }
    



    printf("\n\nexemplo de strspn()\n");
    char fonteUm[] = "123rua das flores";
    char fonteDois[] = "rua das flores123";
    char comparacao[] = "0123456789";
    
    printf("string 'fonteUm': %s\n\n", fonteUm);
    printf("string 'fonteDois': %s\n\n", fonteDois);
    printf("string 'comparacao': %s\n\n", comparacao);
    
    printf("ha um total de %lu digitos iniciais na string fonteUm.\n", (unsigned long)strspn(fonteUm, comparacao));
    printf("ha um total de %lu digitos iniciais na string fonteDois.\n", (unsigned long)strspn(fonteDois, comparacao));

    return 0;
}