#include <stdio.h>

int main() {
    int sum = 0; // Initialize sum to 0

    // Add numbers 1 to 10 to sum
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }

    printf("The sum is: %d\n", sum);

    return 0;
}
