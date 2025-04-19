#include <stdio.h>
void main(){
  int i, j, sum=0;
  for(i = 1; i < 10; i++){      // 바깥쪽 루프: i는 1부터 9까지
    for(j = 1; j < 10; j++){    // 안쪽 루프: j는 1부터 9까지
      if(j % 3 == 0) continue;  // j가 3의 배수이면 아래 코드 건너뛰고 j++
      if(i % 4 == 0) break;     // i가 4의 배수이면 안쪽 for문(j루프) 종료
      sum++;
    }
  }
  printf("%d", sum);
}