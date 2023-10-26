#include <stdio.h>

int main() {
    int escolha;

    printf("Escolha uma opcao (1, 2, 3, 4): ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Você escolheu a opcao 1.\n");
            break;
        case 2:
            printf("Você escolheu a opcao 2.\n");
            break;
        case 3:
            printf("Você escolheu a opcao 3.\n");
            break;
        case 4:
            printf("Você escolheu a opcao 4.\n");
            break;
        default:
            printf("Opcao invalida.\n");
            break;
    }

    return 0;
}

