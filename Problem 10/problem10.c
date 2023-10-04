#include <stdio.h>
#include <stdbool.h>

#define LIMIT 2000000

// Function to calculate the sum of all prime numbers below a given limit
long long sumOfPrimesBelowLimit(int limit) {
    bool isPrime[limit + 1];
    long long sum = 0;

    // Initialize the isPrime array with all values as true
    for (int i = 2; i <= limit; i++) {
        isPrime[i] = true;
    }

    for (int p = 2; p * p <= limit; p++) {
        if (isPrime[p]) {
            // Mark all multiples of p as not prime
            for (int i = p * p; i <= limit; i += p) {
                isPrime[i] = false;
            }
        }
    }

    // Calculate the sum of prime numbers
    for (int i = 2; i <= limit; i++) {
        if (isPrime[i]) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int limit = LIMIT;
    long long sum = sumOfPrimesBelowLimit(limit);

    printf("Solution for problem 10 = %lld\n", sum);
    return 0;
}
