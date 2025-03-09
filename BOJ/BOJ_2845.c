#include <stdio.h>

int main(){
    int L, P;
    scanf("%d %d", &L, &P);
    int whole_people = L * P;
    int newspaper[5];

    for(int i=0; i<5; i++){
        scanf("%d", &newspaper[i]);
        printf("%d ", newspaper[i] - whole_people);
    }

    return 0;
}
