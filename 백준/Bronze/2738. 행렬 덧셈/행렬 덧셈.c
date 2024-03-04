#include <stdio.h>

int main (){
    int a, b = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    int x[a][b];
    int y[a][b];
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            scanf("%d", &x[i][j]);
        }
    }
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            scanf("%d", &y[i][j]);
        }
    }
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            printf("%d ", x[i][j] + y[i][j]);
        }
        printf("\n");
    }
    
}