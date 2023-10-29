#include<stdio.h>


/* Função fatorial*/
int sum(int num) {

if(num != 0){
  return num + sum(num - 1);
}
else {
  return num;
}
}

/* Função main*/
int main() {
  int result = 0;
  result = sum(5);
  printf(" O resultado da função fatorial é igual a %d. \n", result);

  return 0;
}