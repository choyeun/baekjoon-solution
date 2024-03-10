#include <stdio.h>

int main(){
    char buf[1024];
    scanf("%s", buf);
    int len = strlen(buf);
    int i = 0;
    scanf("%d", &i);
    printf("%c", buf[i-1]);
}