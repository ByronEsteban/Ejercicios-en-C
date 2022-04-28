#include <stdio.h>
#include <stdlib.h>

//Escribir un programa que tome dos argumentos enteros positivos e imprima "verdadero" si alguno de los argumentos es divisible por el otro.//

int main(int argc, char const *argv[]) {
  int a=atoi(argv[1]);
  int b=atoi(argv[2]);
  printf("%s\n", a%b==0||b%a==0 ? "Verdadero" : "Falso");
  return 0;
}
