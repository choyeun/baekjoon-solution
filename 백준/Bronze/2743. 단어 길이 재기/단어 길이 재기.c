#include <stdio.h>
#include <string.h> // strlen 함수를 사용하기 위해 포함

int main(){
    char a[100]; // char 타입의 배열로 선언
    scanf("%s", a); // 문자열을 입력 받음
    
    int length = strlen(a); // strlen 함수를 사용하여 문자열의 길이 측정
    printf("%d", length); // 문자열의 길이 출력
    
    return 0;
}
