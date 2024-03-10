#include <stdio.h>

int main(){
    long long a, b = 0;
    scanf("%lld %lld", &a, &b);
    printf("%lld", (a+b)*(a-b));
}