#include <stdio.h>

int main(){
    int n, k; // n : 쿠폰 개수, k : 쿠폰 하나에 필요한 도장의 개수
    int answer = 0;
    int stamp = 0;

    // 아래 while 루프는 각 테스트 케이스마다 입력을 받을 수 있게함
    while(scanf("%d %d", &n, &k) != EOF){
        while(1){
            answer += n; // 치킨으로 교환한 쿠폰의 개수
            stamp += n; // 치킨 주문한 만큼 받은 도장의 개수
            n = stamp / k; // 받은 도장만큼 생긴 치킨 쿠폰
            stamp %= k; // 쿠폰 교환 후 잔여 도장
            if(n==0){
                break;
            }
        }
        printf("%d\n", answer);
        n = 0, k = 0, answer = 0, stamp = 0;
    }
    return 0;
}