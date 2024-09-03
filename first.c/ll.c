#include <stdio.h>
#include <math.h>

int main() {
    float principal = 5000;
    float rate = 11;
    int years = 10;
    float amount;

    printf("Year\tAmount\n");

    for (int year = 1; year <= years; year++) {
        amount=principal+rate*principal;
        printf("%d\t%.2f\n", year, amount);
    }

    return 0;
}
