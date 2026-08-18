#include <stdio.h>
int main() {
  char nome[50];
  int idade;
  
  printf("digite seu nome: ");
  scanf("%s", nome);
  printf("digite sua idade: ");
  scanf("%d", &idade);
  
  printf("Bem-vindo(a), %s! Você tem %d anos. \n", nome, idade);
  
  return 0;
  }
