#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i = 10;
    int j = 3;
    int k = i / j;
    int l = i % j;
    printf("%d 割る %d は、 %d 余り %d\n", i, j, k, l);
    return EXIT_SUCCESS;
}
