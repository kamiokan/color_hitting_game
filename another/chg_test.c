#include <stdio.h>
#include <stdlib.h>

#include "color_hitting_game.h"

int main(void) {
    puts("エンターキーでゲームを開始します。");
    while (getchar() != '\n') {}
    chg_select_operation();
    return EXIT_SUCCESS;
}
