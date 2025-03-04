#include <stdio.h>
int main(){
    int sum, diff;
    int score_high, score_low;

    scanf("%d %d", &sum, &diff);
    score_high = (sum + diff) / 2;
    score_low = (sum - diff) / 2;

    if(diff > sum){
        printf("-1");
    }
    else{
        if(sum == score_high + score_low && diff == score_high - score_low){
            printf("%d %d", score_high, score_low);
        }
        else{
            printf("-1");
        }
    }

    return 0;
}