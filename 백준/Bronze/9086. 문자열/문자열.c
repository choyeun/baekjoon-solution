#include <stdio.h>

int main(){
    int a = 0;
    scanf("%d",&a);
    for (int i = 0; i < a; i++) {
        char buf[1001];
        scanf("%s", buf);
        
        printf("%c%c\n", buf[0], buf[strlen(buf)-1]);
    }
}