#include <stdio.h>

int main(void)
{
  int valor = 27;
  int *ptr;

  ptr = &valor;

  printf("===========================\n");
  printf("Utilizando ponteiros\n");
  printf("===========================\n");
  printf("Conteúdo da variável valor: %d\n", valor);
  printf("Endereço da variável valor: %p\n", (void*)&valor);
  printf("Endereço da variável ponteiro ptr: %p\n", (void*)ptr);
  printf("Conteúdo apontado por ptr: %d\n", *ptr);

  return 0;
}
