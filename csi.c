#include <stdio.h>
#include "csi.h"

void clear_screen(const enum clear_option option) {
    printf("\33[%dJ", option);
}

void move_cursor(int row, int col) {
    printf("\33[%d;%dH", row, col);
}
