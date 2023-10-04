#include <stdio.h>

long long largestPrimeFactor(long long n) {
    long long maxPrime = -1;
    // Divide n by 2 until it is no longer divisible by 2
    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2;
    }
    // Divide n by odd numbers until it is no longer divisible by that number
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
    }
    // If n is a prime number greater than 2, then n is the largest prime factor
    if (n > 2) {
        maxPrime = n;
    }

    return maxPrime;
}

int main() {
    printf("Solution for problem 3 = %lld\n", largestPrimeFactor(600851475143));
    return 0;
}