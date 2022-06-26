#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
bool solution(const char* s) {
    bool answer = true;
    if (!(strlen(s) == 4 || strlen(s) == 6)) { return false; }
    for (int i = 0; i < strlen(s); i++) {
        if (!('0' <= s[i] && s[i] <= '9')) { return false; }
    }
    return answer;
}