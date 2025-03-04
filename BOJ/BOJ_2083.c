#include <stdio.h>
int main(){
    char name[10];
    int age, weight;

    while(1){
        scanf("%s %d %d", name, &age, &weight);
        if((age == 0) && (weight == 0))
        {
            break; // while 문 나오기
        }
        if((age>17) || (weight>=80))
        {
            printf("%s Senior\n", name);
            continue; // while 문의 처음부터 실행
        }
        else{
            printf("%s Junior\n", name);
            continue;
        }
    }

    return 0;
}
