#include <stdio.h>
#include <stdlib.h>

int valormin(int a, int b) {
    return a > b ? b : a;


   }
   int main(int argc, char* argv[]) {
   int a, b;
   a = atoi(argv[1]);
   b = atoi(argv[2]);

   printf("%d\n", valormin(a, b) );

   return 0;
   }