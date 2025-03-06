#include <stdio.h>
#include <string.h> // strlen() 함수를 사용하기 위함

int main() {
    char word[1000000];
    int count = 0;
    
    scanf("%[^\n]s", word);
    // %와 s 사이에 [^\n]을 넣어 공백이 있는 문자열을 입력받게 함
    int len = strlen(word);
    
    if(len == 1 && word[0] == ' '){
        printf("%d", count);
        return 0;
    }
    // 아무것도 입력받지 않았을 때의 예외처리
    
    for(int i = 1; i < len - 1; i++){
        if(word[i] == ' '){
            count++;
        }
    }
    
    printf("%d", count + 1);
    
    return 0;
}