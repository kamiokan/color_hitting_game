#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char q1 = 'R';
    char q2 = 'G';
    char q3 = 'B';
    char q4 = 'Y';

    puts("【色当てゲーム】");
    puts("ゲームを始めてください。");
    puts("コンピュータが問題を出しました");
    puts("予想を入力してください。");

    char t1 = getchar();
    char t2 = getchar();
    char t3 = getchar();
    char t4 = getchar();

    putchar(t1);
    putchar(t2);
    putchar(t3);
    putchar(t4);

    if (q1 == t1) puts("合っています");
    if (q2 == t2) puts("合っています");
    if (q3 == t3) puts("合っています");
    if (q4 == t4) puts("合っています");

    int matched = 0;
    if (q1 == t1) matched++;
    if (q2 == t2) matched++;
    if (q3 == t3) matched++;
    if (q4 == t4) matched++;
    puts("結果発表");
    printf("%d 個合ってます！\n", matched);

    return EXIT_SUCCESS;
}
