#include<stdio.h>
#include <stdlib.h>

int* gerarRandomico() {

    static int r[10];
    int a;

    for(a = 0; a < 10; a++) {
        r[a] = rand();
        printf("r[%d] = %d\n", a, r[a]);
        
    }
    return r;
}

int main(){

    int *p;
    int i;

    p = gerarRandomico();

    for ( i = 0; i < 10; i++ ) {
        printf("p[%d] = %d\n", i, p[i]);
    }
    return 0;
}
