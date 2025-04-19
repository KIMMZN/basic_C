#include <stdio.h>

void main(void){
  int a, b;
  a = 20;
  b = (a > 10) ? a + a : a * a; // 삼항 연산자 사용
  printf("b=%d\n", b);

  // 결과: b=40 (a가 10보다 크므로 a+a가 선택됨)
}