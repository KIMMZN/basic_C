#include <stdio.h>

void main() {
    int a, b;
    a = 2;

    // while 루프
    while (a-- > 0) { // a 값을 비교한 후 1 감소시킴
        printf("a = %d\n", a);
    }

    // for 루프
    for (b = 0; b < 2; b++) {
        printf("a = %d\n", a++); // a 값을 출력한 후 1 증가시킴
    }
}