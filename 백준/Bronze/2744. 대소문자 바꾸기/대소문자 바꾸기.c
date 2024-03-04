#include <stdio.h>

int main() {
    char word[101]; // 단어를 저장할 배열, 최대 길이 100 + NULL 문자
    scanf("%s", word); // 사용자로부터 단어 입력받기

    for(int i = 0; word[i] != '\0'; i++) { // NULL 문자가 나올 때까지 반복
        if(word[i] >= 'A' && word[i] <= 'Z') { // 대문자일 경우
            word[i] = word[i] + 32; // 소문자로 변환
        } else if(word[i] >= 'a' && word[i] <= 'z') { // 소문자일 경우
            word[i] = word[i] - 32; // 대문자로 변환
        }
    }

    printf("%s\n", word); // 변환된 단어 출력
    return 0;
}
