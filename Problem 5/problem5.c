#include <stdio.h>

// Function to calculate the least common multiple (LCM) of two numbers
long long lcm(long long a, long long b) {
    long long temp = a;
    while (temp % b != 0) {
        temp += a;
    }
    return temp;
}

// Function to find the smallest number divisible by all numbers from 1 to n
long long smallestMultiple(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result = lcm(result, i);
    }
    return result;
}

int main() {
    int n = 20; // Set the desired range
    long long result = smallestMultiple(n);

    printf("Solution for problem 5 = %lld\n", result); // Should print "Solution for problem 5 = 232792560
    return 0;
}
