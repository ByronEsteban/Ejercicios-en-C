#include <stdio.h>
#include <stdlib.h>

//Escribir un programa que acepte dos argumentos, cantidad de horas trabajadas y salario por hora. El programa imprime el salario total del trabajador con un máximo de dos lugares después de la coma.

int main(int argc, char const *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  int d = atoi(argv[4]);
  int e = atoi(argv[5]);
  int suma = 0;
  suma += (a%2==0) ? 0 : a;
  suma += (b%2==0) ? 0 : b;
  suma += (c%2==0) ? 0 : c;
  suma += (d%2==0) ? 0 : d;
  suma += (e&1) ? e : 0;
  return 0;
}
