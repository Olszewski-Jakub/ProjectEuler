#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int findNthPrime(int n) {
    int count = 0;
    int candidate = 2; // Start with the first prime number

    while (count < n) {
        if (isPrime(candidate)) {
            count++;
        }
        candidate++;
    }

    return candidate - 1; // Subtract 1 because we've increased candidate after finding the nth prime
}

int main() {
    int n = 10001; // Replace with the desired value of n
    int nthPrime = findNthPrime(n);

    printf("Solution for problem 7 = %d\n", nthPrime);
    return 0;
}
