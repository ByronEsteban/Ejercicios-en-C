#include <stdio.h>
#include <stdlib.h>

//Escribir un programa que acepte dos argumentos, cantidad de horas trabajadas y salario por hora. El programa imprime el salario total del trabajador con un máximo de dos lugares después de la coma.

int main(int argc, char const *argv[]) {
  int horas_trabajadas = atoi(argv[1]);
  int salario = atoi(argv[2]);
  printf("%s*%s=%s\n", horas_trabajadas, salario );
  return 0;
}
