#include <cstdlib>
#include <iostream>

int main(int argc, char *argv[])
{
    int i;

    do {
        printf("\n Digite o número do sabor \n");
        printf("\t (1) - Flocos\n");
        printf("\t (2) - Creme\n");
        printf("\t (3) - Chocolate\n");

        scanf("%d", &i);
    } while(i <1 || i > 3);

    switch (i){
        case 1:
            printf("\t Você escolheu flocos");
            break;
        case 2:
            printf("\t Você escolheu creme");
            break;
        case 3:
            printf("\t Você escolheu chocolate");
            break;
        
    }
    
    return 0;
    
}
