#include <stdio.h>

// Function to calculate the sum of the squares of the first n natural numbers
long long sumOfSquares(int n) {
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (long long)i * i;
    }
    return sum;
}

// Function to calculate the square of the sum of the first n natural numbers
long long squareOfSum(int n) {
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum * sum;
}

int main() {
    int n = 100; // Set the value of n to 100

    // Calculate the sum of the squares and the square of the sum
    long long sumSquares = sumOfSquares(n);
    long long squareSum = squareOfSum(n);

    // Calculate the difference
    long long difference = squareSum - sumSquares;

    printf("Solution for problem 6 = %lld\n", difference); // Should print "Solution for problem 6 = 25164150
    return 0;
}
