#include <stdio.h>

int main(){
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1+num2==num3){
        printf("%d+%d=%d", num1, num2, num3);
    }
    else if(num1-num2==num3){
        printf("%d-%d=%d", num1, num2, num3);
    }
    else if(num1*num2==num3){
        printf("%d*%d=%d", num1, num2, num3);
    }
    else if(num1/num2==num3){
        printf("%d/%d=%d", num1, num2, num3);
    }
    else if(num1==num2+num3){
        printf("%d=%d+%d", num1, num2, num3);
    }
    else if(num1==num2-num3){
        printf("%d=%d-%d", num1, num2, num3);
    }
    else if(num1==num2*num3){
        printf("%d=%d*%d", num1, num2, num3);
    }
    else if(num1==num2/num3){
        printf("%d=%d/%d", num1, num2, num3);
    }
    return 0;
}