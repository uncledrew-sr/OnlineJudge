#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(){
    float diameter, time; // 바퀴의 지름(inches)과 이동 시간(seconds)
    int rotation_num; // 바퀴의 회전 수
    int count = 0;

    while(1){
        count += 1;
        scanf("%f %d %f", &diameter, &rotation_num, &time); // 입력 받을 때 %.3f 사용 불가
        
        if(rotation_num == 0){
            break;
        }
        float circumference = M_PI * diameter; // 바퀴의 둘레

        // 총 이동거리(mlies)와 평균 속도(miles/hour)를 계산
        float whole_distance = circumference * rotation_num / (12 * 5280);
        // feet to miles -> 5280, inches to miles -> 12 * 5280
        float average_velocity = whole_distance / time * 3600;
        // seconds to hours -> 3600
        printf("Trip #%d: %.2f %.2f\n", count, whole_distance, average_velocity);
    }
    return 0;
}

/*
1 foot = 12 inches
1 miles = 5280 feet
1 miles = (12 * 5280) inches
*/