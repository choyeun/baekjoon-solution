#include <stdio.h>

int main(){
    int count = 0; 
    scanf("%d", &count);
    int a[100];
    int c = 0;
    for (int i = 0; i < count; i++){
        scanf("%d", &a[i]);
    }

    int b;
    scanf("%d", &b);
    for (int i = 0; i < count; i++){
        if (a[i] == b){
            //printf("%d ", i+1);

            c = c+1;
        }
    }

        printf("%d", c);
    
}
