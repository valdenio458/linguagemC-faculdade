#include <cstdlib>
#include <iostream>

int main(int argc, char *argv[])
{
    char nome;
    char endereco;
    int idade;
    
    printf("Nome \n");
    scanf("%s",&nome); // & é o endereço
    
    printf("Endereco \n");
    scanf("%s", &endereco);
    
    printf("Idade");
    scanf("%d", &idade);
    
    printf("\n Nome: %s", nome);
    printf("\n Endereco %d \n", idade);
    
    return 0;
    
}
