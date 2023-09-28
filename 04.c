#include <stdio.h>

int main() {
    char nivel;
    float  aumento, salario, salarioAtualizado;

    printf("Digite o nivel de experiencia (a, b ou c): ");
    scanf(" %c", &nivel);

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    if (nivel == 'a' || 'A') {
        aumento = 0.05;
    } else if (nivel == 'b' || 'B') {
        aumento = 0.07;
    } else if (nivel == 'c' || 'C') {
        aumento = 0.08;
    }

    salarioAtualizado = salario + (salario * aumento);

    printf("R$ %.2f\n", salarioAtualizado);

    return 0;
}
