//4. leia 10 numeros e conte quantos sao maiores que 50.
#include <stdio.h>

int main() {
    int i;
    int numero, maiorQ50 = 0;
    for (i = 0; i < 10; i++) {
        scanf("%d", &numero);
        if (numero > 50) {
            maiorQ50++;
 }
 }
    

printf("total de numeros maiores que 50: %d\n", maiorQ50);

    return 0;
}