#include <stdio.h>

int main(void) {
    int t = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int h, w, n;
        scanf("%d %d %d", &h, &w, &n);
        int floor = n % h;
        int room = n / h + 1;
        if (floor == 0) {
            floor = h;
            room -= 1;
        }
        printf("%d\n", floor * 100 + room);
    }
    return 0;
}