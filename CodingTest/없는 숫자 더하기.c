#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len�� �迭 numbers�� �����Դϴ�.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;

    for (int i = 0; i < numbers_len; i++) {
        answer += numbers[i];
    }
    return 45 - answer;
}