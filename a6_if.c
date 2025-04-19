#include <stdio.h>

int main() {
  int a = 0, b = 1; // a는 0, b는 1로 초기화
  switch (a) {      // a의 값(0)을 기준으로 switch문 실행
      case 0:       // a=0이므로 이 case와 일치함
          printf("%d\n", b++); // b를 출력한 후, b를 1 증가시킴
          break;               // switch문을 빠져나감
      case 1:
          printf("%d\n", ++b); // b를 1 증가시킨 후, b를 출력
          break;
      default:
          printf("%d\n", b);
          break;
  }
  return 0;
}