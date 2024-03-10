#include <stdio.h>

int main(){
    char buf[10001];
    while(fgets(buf, 10001, stdin) != NULL){
        printf("%s", buf);
    }
}