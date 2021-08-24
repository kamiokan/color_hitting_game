#include <stdio.h>
#include <stdlib.h>

int main(void) {
    for (int i = 40; i <= 47; i++) {
        for (int j = 30; j <= 37; j++) {
            printf("\033[%2d;%2dm%d%d\033[0m ", j, i, j, i);
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}
