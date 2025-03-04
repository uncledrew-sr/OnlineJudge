#include <stdio.h>
int main(){
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    int wx = w - x;
    int hy = h - y;

    int min = x; // Assume x is a smallest initially
    if(y < min){
        min = y;
    }
    if(wx < min){
        min = wx;
    }
    if(hy < min){
        min = hy;
    }
    printf("%d", min);

    return 0;
}