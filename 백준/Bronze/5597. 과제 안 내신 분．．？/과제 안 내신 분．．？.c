#include <stdio.h>

int main() {
    int a[30] = {0}; // 배열을 0으로 초기화
    int i, temp;
    for(i=0; i<28; i++) {
        scanf("%d", &temp);
        a[temp-1] = 1; // 입력 받은 수에 해당하는 인덱스를 1로 설정 (1~30 범위 조정)
    }
    for(i=0; i<30; i++) { // 모든 원소를 확인
        if(a[i] == 0) {
            printf("%d\n", i+1); // 실제 숫자는 인덱스보다 1 큼
        }
    }
    return 0;
}
