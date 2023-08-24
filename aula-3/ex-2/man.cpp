#include<stdio.h>

/* Funções*/
void insert(int a[]) {
  int i;
  for(i = 0; i < 3; i++){
    printf("\nDigite um valor %d \t", i);
    scanf("%d", &a[i]);
  }
}

void show(int b[]){
  int i;
  for(i = 0; i < 3; i++){
    printf("\n numeros[%d] = %d", i, b[i] * 2);
    
  }
}

/* Função main*/
int main() {

  int num[3];
  printf("\n Digite os números do vetor :\n");
  insert(num);

  printf("\n valor final");
  show(num);

  return 0;
}