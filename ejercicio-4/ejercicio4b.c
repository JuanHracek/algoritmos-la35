#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int Absoluto(int a) {

    return abs(a);


}

int main(int argc, char* argv[]) {
    int a;

    a = atoi(argv[1]);

    printf("%d\n", Absoluto(a));

    return 0;
}