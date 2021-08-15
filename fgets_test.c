#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char buf[10];
    const int size = sizeof(buf);
    fgets(buf, size, stdin);
    puts(buf);
    fgets(buf, size, stdin);
    puts(buf);
    return EXIT_SUCCESS;
}
