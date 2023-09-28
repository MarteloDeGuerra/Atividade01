#include <stdio.h>

int main() {

    int senhaCadastrada; 
    int senhaInserida;

    printf("Digite a senha cadastrada (4 digitos): ");
    scanf("%d", &senhaCadastrada);

    while (1) {
        printf("Digite a senha para validacao: ");
        scanf("%d", &senhaInserida);

        if (senhaInserida == senhaCadastrada) {
            printf("Senha cadastrada: %d\n Senha valida!\n", senhaCadastrada);
            break;
        } else {
            printf("Senha invalida!\n");
        }
    }

    return 0;
}
