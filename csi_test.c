#include <stdio.h>
#include <stdlib.h>

int main(void) {
    puts("何かキーを押すと画面を消します。");
    (void) getchar();
    printf("\033[2J");
    printf("\033[10;5H");
    printf("10桁5行目にカーソルを移動\n");

    return EXIT_SUCCESS;
}
