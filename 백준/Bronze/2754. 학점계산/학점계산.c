#include <stdio.h>

int main () {
    char a[3];
    scanf("%s", a); // 사용자로부터 등급을 입력받음

    switch (a[0]) // 첫 번째 문자(등급)에 따라 분기
    {
    case 'A':
        if (a[1] == '+') {
            printf("4.3");
        } else if (a[1] == '0') {
            printf("4.0");
        } else if (a[1] == '-') {
            printf("3.7");
        }
        break;
    case 'B':
        if (a[1] == '+') {
            printf("3.3");
        } else if (a[1] == '0') {
            printf("3.0");
        } else if (a[1] == '-') {
            printf("2.7");
        }
        break;
    case 'C':
        if (a[1] == '+') {
            printf("2.3");
        } else if (a[1] == '0') {
            printf("2.0");
        } else if (a[1] == '-') {
            printf("1.7");
        }
        break;
    case 'D':
        if (a[1] == '+') {
            printf("1.3");
        } else if (a[1] == '0') {
            printf("1.0");
        } else if (a[1] == '-') {
            printf("0.7");
        }
        break;

    default:
        printf("0.0");
        break;
    }
    
    return 0;
}
