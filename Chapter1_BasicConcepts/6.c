// 두 정수의 비교

#include <stdio.h>

int compare(int x, int y) {
    // compare x and y, return -1 for less than, 0 for equal, 1 for greater
    if (x < y) return -1;
    else if (x == y) return 0;
    else return 1;
}

void main() {
    printf("%d\n", compare(1, 123));
    printf("%d\n", compare(123, 123));
    printf("%d", compare(123, 1));
}