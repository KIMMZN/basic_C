#include <stdio.h>
int main() {
  int i, sum = 0;
  // i는 1부터 시작, 10보다 작거나 같을 때까지, 2씩 증가
  for (i = 1; i <= 10; i += 2) {
      // i를 2로 나눈 나머지가 0이 아니고(홀수이고), i를 3으로 나눈 나머지도 0이 아니면(3의 배수가 아니면) continue 실행
      if (i % 2 && i % 3) continue;
      sum += i; // if 조건이 거짓일 때만 실행됨
  }
  printf("%d", sum); // 최종 sum 값 출력
  return 0;
}