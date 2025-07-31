// 정렬된 리스트 탐색

#include <stdio.h>

int binary_search(int list[], int n, int serachnum);

void main() {
    int n = 5;
    int list[] = {16, 60, 515, 3325, 79125};
    int searchnum = 3325;
    int result = 0;

    result = binary_search(list, n, searchnum);

    printf("%d", result);
}

int binary_search(int list[], int n, int searchnum) {
    int left = 0;
    int right = n - 1;
    int middle;

    /*
    while (there are more integers to check) {
        middle = (left + right) / 2;

        if (searchnum < list[middle])
            right = middle - 1;
        else if (searchnum == list[middle])
            return middle;
        else
            left = middle + 1;
    }
    */

    while (left <= right) {
        middle = (left + right) / 2;

        if (searchnum < list[middle])
            right = middle - 1;
        else if (searchnum == list[middle])
            return middle;
        else
            left = middle + 1;
    }

    return -1;
}