#include<stdio.h>

int somar(int num1, int num2) {
  int result;
  result = num1 + num2;
  return result;
}

int main() {
  int resultado = 0;
  resultado = somar(5, 15);
  printf(" O resultado da função é igual a %d. \n", resultado);

  return 0;
}