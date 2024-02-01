#include <stdio.h>

int main() {

    int count = 0;

    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        int a = 0;
        int b = 0;

        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }

    return 0;
}