#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(){
    char grade[3]; // null
    double score;
    scanf("%s", grade); // 문자열 입력

    if(grade[0]=='A'){
        switch(grade[1]){
            case '+': score = 4.3;
                break;
            case '0': score = 4.0;
                break;
            case '-': score = 3.7;
                break;
        }
    }
    else if(grade[0]=='B'){
        switch(grade[1]){
            case '+': score = 3.3;
                break;
            case '0': score = 3.0;
                break;
            case '-': score = 2.7;
                break;
        }
    }
    else if(grade[0]=='C'){
        switch(grade[1]){
            case '+': score = 2.3;
                break;
            case '0': score = 2.0;
                break;
            case '-': score = 1.7;
                break;
        }
    }
    else if(grade[0]=='D'){
        switch(grade[1]){
            case '+': score = 1.3;
                break;
            case '0': score = 1.0;
                break;
            case '-': score = 0.7;
                break;
        }
    }
    else if(grade[0]=='F'){
        score = 0.0;
    }
    printf("%.1lf", score); // .f는 float .lf는 double에 사용
    return 0;
}