#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QSIZSE (4)

char get_trial_char(void) {
    char ch;
    for (;;) {
        ch = getchar();
        if (ch == 'R' || ch == 'G' || ch == 'B' || ch == 'Y' || ch == 'M' || ch == 'C') { return ch; }
    }
    return ch;
}

void discard_input(void) {
    for (; getchar() != '\n';) {
        /* do nothing */
    }
}

void chg_display_title(void) {
    puts("【色当てゲーム】");
    puts("ゲームを始めてください。");
}

static char qx[QSIZSE];
static const int num_of_colors = 6;

void chg_make_question(void) {
    for (int i = 0; i < QSIZSE; i++) {
        int qn = rand() % num_of_colors;
        if (qn == 0) { qx[i] = 'R'; }
        else if (qn == 1) { qx[i] = 'G'; }
        else if (qn == 2) { qx[i] = 'B'; }
        else if (qn == 3) { qx[i] = 'Y'; }
        else if (qn == 4) { qx[i] = 'M'; }
        else if (qn == 5) { qx[i] = 'C'; }
    }
    puts("コンピュータが問題を出しました");
}

int chg_play_turn(void) {
    int matched = 0;

    char tx[QSIZSE];
    for (int i = 0; i < QSIZSE; i++) {
        tx[i] = get_trial_char();
    }
    discard_input();

    for (int i = 0; i < QSIZSE; i++) {
        putchar(tx[i]);
    }

    for (int i = 0; i < QSIZSE; i++) {
        if (qx[i] == tx[i]) matched++;
    }

    return matched;
}

int chg_check_result(int matched) {
    puts("結果発表");
    printf("%d 個合ってます！\n", matched);
    if (matched == QSIZSE) {
        return 1;
    } else {
        return 0;
    }
}

void chg_display_win_or_lose(int player_win) {
    if (player_win) {
        puts("あなたの勝ちです。");
    } else {
        puts("残念！出題者の勝ちです。");
    }
}

void color_hitting_game(void) {
    int player_win = 0;

    srand((unsigned) time(NULL));
    chg_display_title();
    chg_make_question();
    const int max_turns = 10;
    for (int i = 0; i < max_turns; i++) {
        printf("予想を入力してください。%d 回目\n", i + 1);

        int matched = 0;
        matched = chg_play_turn();

        player_win = chg_check_result(matched);
        if (player_win) {
            break;
        }
    }

    chg_display_win_or_lose(player_win);
    return;
}

int main(void) {
    color_hitting_game();
    return EXIT_SUCCESS;
}
