#include <stdio.h>
int main() {
  int j; // 정수형 변수 j 선언
  int sum = 0; // 정수형 변수 sum 선언 및 0으로 초기화

  // for 루프 시작
  // 1. 초기식: j = 2
  // 2. 조건식: j <= 70
  // 4. 증감식: j = j + 5 (j += 5와 동일)
  for (j = 2; j <= 70; j += 5) {
      // 3. 루프 본문: sum = sum + 1
      sum = sum + 1;
  }
  // 루프 종료 후 sum 값 출력
  printf("%d, %d", sum, j);

  return 0;
}