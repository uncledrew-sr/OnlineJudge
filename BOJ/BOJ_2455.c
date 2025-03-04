#include <stdio.h>
int main(){
    int head_count = 0; // 기차에 탄 사람
    int max = 0;
    
    for(int i=0; i<4; i++){
        int get_off, get_on;
        scanf("%d %d", &get_off, &get_on);

        head_count += (get_on - get_off);

        if(head_count > max){
            max = head_count;
        }
    }
    printf("%d\n", max);
    
    return 0;
}