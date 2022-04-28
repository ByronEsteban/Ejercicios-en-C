#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//FALTA DECLARAR EL COSENO (?)

//Escribir un programa que use cos() y sin() definidos en math.h para imprimir el valor de cos2θ + sen2θ para cualquier θ ingresado como argumento.

int main(int argc, char const *argv[]) {
  double theta = atof(argv[1]);
  printf("%f\n", cos(theta)*cos(theta) + sin(theta)*sin(theta));
  return 0;
}
