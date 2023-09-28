#include <stdio.h>

int main() {
    int numero; 
    int digito;
    int soma ;

    soma = 0;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
   
    if (numero % 2 == 0) {
        printf("O numero %d e par.\n", numero);
    } else {
        printf("O numero %d e impar.\n", numero);
    }
    
    while (numero > 0) {
        digito = numero % 10;
        soma += digito; 
        numero /= 10; 
    }
    
    printf("A soma dos digitos do numero e %d.\n", soma);

    return 0;
}
