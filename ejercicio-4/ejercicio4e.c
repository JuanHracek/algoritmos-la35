#include <stdio.h>
#include <stdlib.h>

int promedio(int a, int b) {
    return (a + b) / 2;


   }
   int main(int argc, char* argv[]) {
   int a, b;
   a = atoi(argv[1]);
   b = atoi(argv[2]);

   printf("%d\n", promedio(a, b) );

   return 0;
   }