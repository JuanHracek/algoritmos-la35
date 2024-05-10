#include <stdio.h>
#include <stdlib.h>

int sonIguales(int a, int b) {
    return a == b ? 1 : 0;


   }
   int main(int argc, char* argv[]) {
   int a, b;
   a = atoi(argv[1]);
   b = atoi(argv[2]);

   printf("%d\n", sonIguales(a, b) );

   return 0;
   }