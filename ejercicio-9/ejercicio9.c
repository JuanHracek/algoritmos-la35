#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char sumarandom(int a, int b) {
  a = rand() % 7;
  b = rand() % 7;
  int c = a + b;
  return c;
  
}

int main(int argc, char* argv[]) {
  int a, b;
  srand(time(NULL));
  printf("La suma de los numeros randoms son: %d\n", sumarandom(a, b));

  return 0;
}
  