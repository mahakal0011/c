#include <stdio.h>

int main() {
    int num;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    if (num <= 0) {
        goto error;
            
    }
    

    printf("The number is: %d\n", num);

    return 0;

error:
    printf("Invalid number\n");
    return 1;
}
