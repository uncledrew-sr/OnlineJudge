#include <stdio.h>
int main(){
    int n, x, y;
    scanf("%d", &n);
    // x : the number of brains the zombie eats
    // y : the number of brains the zombie requires to stay alive

    for(int i=0; i<n; i++){
        scanf("%d %d", &x, &y);
        if (x >= y){
            printf("MMM BRAINS\n");
        }
        if (x < y){
            printf("NO BRAINS\n");
        }
    }

    return 0;
}