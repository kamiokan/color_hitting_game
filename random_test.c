#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int i;
    srand((unsigned) time(NULL));
    for (i = 0; i < 10; i++) {
        int j = rand() % 6;
        printf("%d\n", j);
    }
    return EXIT_SUCCESS;
}
