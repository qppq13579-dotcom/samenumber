#define  _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main(void) {
    int num;
    int prev = -1;
    int streak = 0;
    int total = 0;

    while (1) {
        printf("1~9 사이의 정수 입력: ");

        if (scanf_s("%d", &num) != 1) {
            printf("잘못된 입력입니다.\n");
            return 1;
        }

        if (num < 1 || num > 9) {
            printf("오류: 1~9 사이의 정수를 입력하세요.\n");
            continue;
        }

        total++;

        if (num == prev) {
            streak++;
        }
        else {
            prev = num;
            streak = 1;
        }

        if (streak == 3) {
            printf("숫자 %d가 3번 연속 나왔습니다.\n", num);
            break;
        }
    }

    printf("전체 입력 횟수: %d회\n", total);

    return 0;
}