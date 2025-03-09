#include <stdio.h>

int main() {
    for (int i = 0; i < 3; i++) {
        int N = 0;
        long long S_pos = 0;  // 양수 합
        long long S_neg = 0;  // 음수 합
        int pos_count = 0;    // 양수 개수
        int neg_count = 0;    // 음수 개수

        scanf("%d", &N);

        for (int j = 0; j < N; j++) {
            long long inputInt = 0;
            scanf("%lld", &inputInt);

            if (inputInt > 0) {
                S_pos += inputInt;
                pos_count++;
            }
            else if (inputInt < 0) {
                S_neg += inputInt;  // 음수는 그대로 더함 (음수 합 증가)
                neg_count++;
            } // inputInt == 0은 합에 영향을 주지 않음
        }
        // 부호 판별
        if (S_pos + (-S_neg) > 0) {  // 양수 합과 음수 합의 차이
            printf("+\n");
        } else if (S_pos + (-S_neg) == 0) {
            printf("0\n");
        } else {
            printf("-\n");
        }
    }
    return 0;
}