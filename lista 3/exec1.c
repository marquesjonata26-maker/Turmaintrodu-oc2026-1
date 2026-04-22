#include <stdio.h>

int main() {
    int biometria, senha, modoSeguro;

    // Entrada de dados
    printf("Biometria (1-correta, 0-incorreta): ");
    scanf("%d", &biometria);
    
    printf("Senha (1-correta, 0-incorreta): ");
    scanf("%d", &senha);
    
    printf("Modo Seguro (1-ativo, 0-inativo): ");
    scanf("%d", &modoSeguro);

    // Lógica de Decisão
    if (modoSeguro == 1) {
        // No modo seguro, ignoramos a biometria
        if (senha == 1) {
            printf("DESBLOQUEADO\n");
        } else {
            printf("BLOQUEADO\n");
        }
    } else {
        // Fora do modo seguro, qualquer uma das duas serve (Porta lógica OR)
        if (biometria == 1 || senha == 1) {
            printf("DESBLOQUEADO\n");
        } else {
            printf("BLOQUEADO\n");
        }
    }

    return 0;
}
