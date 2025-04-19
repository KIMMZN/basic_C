#include <stdio.h>

#define VALUE1 1
#define VALUE2 2

int main(){
    int x = 0x11; // 16진수 11
    int y, z;
    y = x & 0x0f; // x와 16진수 0f의 AND 연산
    z = x | 0x0f; // x와 16진수 0f의 OR 연산
    printf("x=%d, y=%d, z=%d\n", x, y, z); // 10진수로 출력

    float i;
    int j, k, m;
    i = 100 / 300;         // ① 정수/정수 = 정수(0). i = 0.0
    j = VALUE1 & VALUE2;   // ② j = 1 & 2 (Bitwise AND) -> 0001 & 0010 = 0000. j = 0
    k = VALUE1 | VALUE2;   // ③ k = 1 | 2 (Bitwise OR)  -> 0001 | 0010 = 0011. k = 3
    if(j && k || i)        // ④ (j=0=false && k=3=true || i=0.0=false)
                          //    (false && true) || false -> false || false = false
        m = i + j;         // ⑤ 실행 안 됨
    else
        m = j + k;         // ⑥ m = 0 + 3 = 3
    printf("i = %.1f j = %d k = %d m = %03d\n", i, j, k, m); // ⑦ 출력
    // i = 0.0, j = 0, k = 3, m = 003;


 return 0; // Return 0 to indicate successful completion of the program

}