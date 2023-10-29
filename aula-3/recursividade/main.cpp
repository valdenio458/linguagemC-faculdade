#include<stdio.h>


/* Função somar*/
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
  printf(" O resultado da função somar é igual a %d. \n", result);

  return 0;
}