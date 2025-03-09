#include <stdio.h>

int main(){
    int n, k; // n : 쿠폰 개수, k : 쿠폰 하나에 필요한 도장의 개수
    
    /*
    아래 while 루프는 각 테스트 케이스마다 입력을 받을 수 있게함
    EOF(End of File)는 입력 또는 파일이 끝났음을 나타내는 특별한 값
    C에서 scanf()를 사용할 때, 더 이상 입력이 없으면 scanf()는 EOF(-1)를 반환함
    1. scanf("%d %d", &n, &k) → 정수 두 개를 입력받음
	2. 입력이 정상적으로 들어오면 scanf()는 입력받은 변수 개수(=2)를 반환
	3. 입력이 끝나면 scanf()는 EOF(-1)을 반환 → while 루프 종료
    즉, 입력이 끝날 때까지 반복하는 역할을 함
    */
    while(scanf("%d %d", &n, &k) != EOF){
        int answer = 0, stamp = 0;
        while(n > 0){
            answer += n; // 치킨으로 교환한 쿠폰의 개수
            stamp += n; // 치킨 주문한 만큼 받은 도장의 개수
            n = stamp / k; // 받은 도장만큼 생긴 치킨 쿠폰
            stamp %= k; // 쿠폰 교환 후 잔여 도장
            if(n==0){
                break;
            }
        }
        printf("%d\n", answer);
    }
    return 0;
}