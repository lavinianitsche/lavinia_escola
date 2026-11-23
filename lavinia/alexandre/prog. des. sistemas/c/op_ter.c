#include <stdio.h>

int main() {

    int glicemia;
    char op;
    printf("voce esta gravida? s/n\n");
    scanf("%c", &op);
    
    switch(op){

        case 's':{
            printf("digite o valor da glicemia");
            scanf("%d", &glicemia);
            (glicemia < 92) ? printf("ta suave") : printf("vai pro medico");
            break;
        }
        case 'n': {
            printf("digite o valor da glicemia\n");
            scanf("%d", &glicemia);
            (glicemia < 100) ? printf("ta suave") : printf("vai pro medico");
            break;
        }
        default:
        printf("ta doidao?\n");
        break;
        
    }
    
    return 0;
}