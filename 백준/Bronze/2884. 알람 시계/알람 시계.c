#include <stdio.h>

int main(){

    int a, b = 0;

    scanf("%d %d", &a, &b);

    if (b < 45){
        if (a == 0){
            a = 23;
        } else {
            a--;
        }
        b += 15;
    } else {
        b -= 45;
    }
    printf("%d %d", a, b);
}