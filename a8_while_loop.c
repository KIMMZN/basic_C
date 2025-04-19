#include <stdio.h>

int main() {
    int count = 2;
    int sum = 0;
    while (count <= 10) { // 조건: count가 10보다 작거나 같은 동안
        sum += count; // sum = sum + count;
        count += 2;   // count = count + 2;
    }
    printf("%d", sum); // sum = 30;
    return 0;
}