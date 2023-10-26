#include <cstdlib>
#include <iostream>

int main(int argc, char *argv[])
{
    int linha, coluna;
    int matriz[2][2];

    for (linha = 0; linha < 2; linha++)
    {
        for (coluna = 0; coluna < 2; coluna++)
        {
            printf("Digite os valores para: linha %d, coluna %d: ", linha + 1, coluna + 1);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    printf("Veja a sua matriz:\n");

    for (linha = 0; linha < 2; linha++)
    {
        for (coluna = 0; coluna < 2; coluna++)
        {
            printf("%d\t", matriz[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
    
}
