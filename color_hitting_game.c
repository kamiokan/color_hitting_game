#include <stdio.h>
#include <stdlib.h>

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

static char q1;
static char q2;
static char q3;
static char q4;

void chg_make_question(void) {
    q1 = 'R';
    q2 = 'G';
    q3 = 'B';
    q4 = 'Y';
    puts("コンピュータが問題を出しました");
}

void color_hitting_game(void) {
    int player_win = 0;

    chg_display_title();
    chg_make_question();
    for (int i = 0; i < 10; i++) {
        printf("予想を入力してください。%d 回目\n", i + 1);

        char t1 = get_trial_char();
        char t2 = get_trial_char();
        char t3 = get_trial_char();
        char t4 = get_trial_char();
        discard_input();

        putchar(t1);
        putchar(t2);
        putchar(t3);
        putchar(t4);

        int matched = 0;
        if (q1 == t1) matched++;
        if (q2 == t2) matched++;
        if (q3 == t3) matched++;
        if (q4 == t4) matched++;
        puts("結果発表");
        printf("%d 個合ってます！\n", matched);
        if (matched == QSIZSE) {
            player_win = 1;
            break;
        }
    }
    if (player_win) {
        puts("あなたの勝ちです。");
    } else {
        puts("残念！出題者の勝ちです。");
    }
    return;
}

int main(void) {
    color_hitting_game();
    return EXIT_SUCCESS;
}
