#include <stdio.h>

int main(){
    int T, a, b;
    scanf("%d", &T);

    for(int i=0; i<T; i++){
        scanf("%d %d", &a, &b);

        int value = 1; // a를 b번 곱하므로 value는 1로 초기화
        for(int j=0; j<b; j++){ // 루프마다 a를 b번 곱하는 제곱 연산 구현
            value *= a; // 1에 a를 곱하기
            value %= 10; // 10으로 나눈 나머지를 구하기
        }

        if(value == 0){
            value = 10;
        }
        printf("%d\n", value);
    }
    return 0;
}