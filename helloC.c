#include <stdio.h> //

int add(int a, int b);
// Function prototype for add function
int main() {
  printf("hello, world\n"); // Print a message to the console

  
  printf("%d\n", add(1, 4));
  
  return 0; // Return 0 to indicate successful completion of the program
}

// add 함수를 정의의
int add(int a, int b) {

  return a + b;
}


