#include<stdio.h>


/* Função fatorial*/
int fatorial(int num) {

if(num != 1){
  return num * fatorial(num - 1);
}
else {
  return num;
}
}

/* Função main*/
int main() {
  int result = 0;
  result = fatorial(5);
  printf(" O resultado da função fatorial é igual a %d. \n", result);

  return 0;
}