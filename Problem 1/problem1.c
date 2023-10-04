#include <stdio.h>

int findMultiples(int n) {
    n--; // Subtract 1 to exclude n itself from the calculation

    int sumOfMultiples3 = (3 * (n / 3) * (n / 3 + 1)) / 2;
    int sumOfMultiples5 = (5 * (n / 5) * (n / 5 + 1)) / 2;
    int sumOfMultiples15 = (15 * (n / 15) * (n / 15 + 1)) / 2;

    int sum = sumOfMultiples3 + sumOfMultiples5 - sumOfMultiples15;

    return sum;
}


int main() {
    int n = 1000;
    printf("Solution for problem 1 = %d\n", findMultiples(n));
    return 0;
}
