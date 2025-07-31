// swap 함수

#include <stdio.h>

void swap(int *x, int *y) {
    // 두 매개 변수는 모두 정수 타입을 갖는 포인터 변수이다.
    int temp = *x;      // temp 변수를 int로 ㅅ너언하고 x가 가리키는 주소의 내용을 지정한다.
    *x = *y;            // y가 가리키는 주소의 내용을 x가 가리키는 주소에 저장한다.
    *y = temp;          // temp의 내용을 y가 가리키는 주소에 저장한다.
}

void main() {

}