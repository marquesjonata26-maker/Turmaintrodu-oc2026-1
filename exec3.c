#include <stdio.h>

int main() {
    int i;
    float numero, soma = 0; // 'soma' começa em zero

    for (i = 1; i <= 5; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%f", &numero);

        // Verifica se o número é positivo
        if (numero > 0) {
            soma = soma + numero; // Adiciona à soma apenas se for positivo
        }
    }

    printf("\nA soma dos números positivos é: %.2f\n", soma);

    return 0;
}