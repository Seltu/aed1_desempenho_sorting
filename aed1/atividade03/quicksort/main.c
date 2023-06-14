/*
    Equipe:
    Rayane Moraes Ferreira
    Selthon Noronha de Moura
    Victor Emanuel Barros De Lima
    Quick sort
*/
#include "quicksort.c"
#include <stdio.h>
#include <time.h>
#define MAX 1000

int main(int argc, char **argv) {
  // Entrada
  int vetor[MAX];
  double start, finish, elapsed;

  for (int i = 0; i < MAX; i++)
    scanf("%d\n", &vetor[i]);

  // Processamento
  //  inicia o cronometro
  start = (double)clock() / CLOCKS_PER_SEC;

  quicksort(0, MAX, vetor);

  // finaliza o cronometro
  finish = (double)clock() / CLOCKS_PER_SEC;

  elapsed = (double)finish - start;

  // Saída
  // Imprime o tempo decorrido
  // printf("%f\n", elapsed);

  // Imprime o vetor ordenado
  for (int i = 0; i < MAX; i++)
    printf("%d\n", vetor[i]);

  return 0;
}