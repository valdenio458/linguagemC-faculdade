#include <cstdlib>
#include <cstdio>
#include <ctype.h>

int main(int argc, char *argv[])
{
    char nome [30];

    int i;

    printf("Digite um nome:\n");

    scanf("%s", nome);

    for (i = 0; nome[i] != ' ' && nome[i] != '\0'; i++)

    nome[i] = toupper(nome[i]);

    printf("\n\nNome convertido: %s\n\n", nome);

    return 0;


    }
