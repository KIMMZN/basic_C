#include <stdio.h>

int main() {
  printf("%-6.3f\n", 3.26);
  printf("%6.3f\n", 3.26);
   
  double d_value;
  float f_value = 5.65;
  int n;

  d_value = f_value;       // d_value = 5.65
  d_value = d_value + 0.5; // d_value = 6.15
  n = (int)d_value;       // n = 6 (실수를 정수로 형변환 시 소수점 이하 버림)
  printf("%3.1f, %d", d_value, n); // %3.1f: 6.15를 소수점 1자리로 반올림하여 3칸에 출력 -> 6.2
                                   // %d: n(6)을 10진수로 출력 -> 6
  // 결과: d_value = 6.2, n = 6;

  return 0; // Return 0 to indicate successful completion of the program
}