#include <stdio.h>
#include <stdlib.h>

char get_trial_char(void) {
    char ch;
    for (;;) {
        ch = getchar();
        if (ch == 'R') { return ch; }
        if (ch == 'G') { return ch; }
        if (ch == 'B') { return ch; }
        if (ch == 'Y') { return ch; }
        if (ch == 'M') { return ch; }
        if (ch == 'C') { return ch; }
    }
    return ch;
}

void discard_input(void) {
    for (; getchar() != '\n';) {
        /* do nothing */
    }
}

int main(void) {
    char q1 = 'R';
    char q2 = 'G';
    char q3 = 'B';
    char q4 = 'Y';

    puts("【色当てゲーム】");
    puts("ゲームを始めてください。");
    puts("コンピュータが問題を出しました");
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
    }
    return EXIT_SUCCESS;
}
