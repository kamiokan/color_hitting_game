#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("\033[31m");
    puts("赤い文字");
    printf("\033[0m");

    printf("\033[43m");
    puts("黄色い背景");
    printf("\033[0m");

    printf("\033[31;43m");
    puts("赤い文字;黄色い背景");
    printf("\033[0m");

    puts("元通り");
    puts("元通り2");

    return EXIT_SUCCESS;
}
