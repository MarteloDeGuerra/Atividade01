#include <stdio.h>

int main() {

    int X, Y;
    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &X);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &Y);

    if (X == Y) {
        printf("Os valores lidos sao iguais\n");
    } else {
        if (X > Y) {
            printf("%d eh maior que %d\n", X, Y);
            if (X % Y == 0) {
                printf("%d eh multiplo de %d\n", X, Y);
            } else {
                printf("%d nao eh multiplo de %d\n", X, Y);
            }
        } else {
            printf("%d eh maior que %d\n", X, Y);
            if (Y % X == 0) {
                printf("%d eh multiplo de %d\n", Y, X);
            } else {
                printf("%d nao eh multiplo de %d\n", Y, X);
            }
        }
    }

    return 0;
}
