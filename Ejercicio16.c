#include <stdio.h>
#include <stdlib.h>
//Escribir un programa que con cuatro argumentos enteros ingresados por línea de comandos calcule la suma de dos vectores en el plano e imprima el resultado.

int main(int argc, char const *argv[]) {
  int v1= atoi(argv[1]);
  int v2= atoi(argv[2]);
  int u1= atoi(argv[3]);
  int u2= atoi(argv[4]);
  int t1=(v1+u1);
  int t2=(v2+u2);
  printf("(%d + %d) (%d + %d) = (%d;%d)\n", v1, u1, v2, u2, t1, t2);
  return 0;
}
