#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>



char* ruleta(int b, int r) {

  r = rand() % 37;

  char* verif = (r == b ? "true" : "false");
  return verif;
}

int main(int argc, char* argv[]) {
  int r, b;
  srand(time(NULL));
  b = atoi(argv[1]);
  printf("%s\n", ruleta(r, b));
  return 0;
}
