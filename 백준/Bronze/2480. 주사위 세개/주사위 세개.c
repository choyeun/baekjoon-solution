#include <stdio.h>

int main(){

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int count = 0;

    if (a == b && b == c){
        count = 3;
    } else if (a == b || b == c || a == c){
        count = 2;
    } else {
        count = 0;
    }

    if (count == 3){
        printf("%d", 10000 + a * 1000);
    } else if (count == 2){
        if (a == b){
            printf("%d", 1000 + a * 100);
        } else if (b == c){
            printf("%d", 1000 + b * 100);
        } else {
            printf("%d", 1000 + c * 100);
        }
    } else {
        int max = a;
        if (b > max){
            max = b;
        }
        if (c > max){
            max = c;
        }
        printf("%d", max * 100);
    }
}