#include <stdio.h>
int main(){
    int T; // testcase의 개수
    scanf("%d", &T);
    
    for(int j=0; j<T; j++){
        int N = 0; // 학생 수
        scanf("%d", &N);
        
        long long totalNumberOfCandies = 0; // 학생들이 가져온 사탕 개수의 총합

        for(int i=0; i<N; i++){
            long long candy = 0; // 학생 1명이 가져온 사탕의 개수
            scanf("%lld", &candy);
            totalNumberOfCandies = (totalNumberOfCandies + candy) % N; // 이걸 왜 하지?
            /*totalNumberofCandies += candy*/
        }

        if(totalNumberOfCandies == 0){ /*totalNumberOfCandies % N == 0*/
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    
    return 0;
}