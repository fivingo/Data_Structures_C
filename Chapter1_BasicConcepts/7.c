// 순서 리스트 탐색

#include <stdio.h>

int binsearch(int list[], int seachnum, int left, int right) {
    /* search list[0] <= list[1] <= ... <= list[n-1] for searchnum.
     * Return itst position if fouind.
     * Otherwise return -1
     */
    int middle;

    while (left <= right) {
        middle = (left + right) / 2;

        switch (COMPARE(list[middle], seachnum)) {
            case -1:
                left = middle + 1;
                break;
            case 0:
                return middle;
            case 1:
                right = middle - 1;
        }
    }
}

void main() {

}