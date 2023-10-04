#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
// Reverse the number
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int findLargestPalindrome() {
    int largestPalindrome = 0;
    // Loop through all 3-digit numbers
    for (int i = 999; i >= 100; i--) {
        for (int j = 999; j >= 100; j--) {
            // If the product of two 3-digit numbers is a palindrome and larger than the current largest palindrome, then it is the new largest palindrome
            int product = i * j;
            if (product > largestPalindrome && isPalindrome(product)) {
                largestPalindrome = product;
            }
        }
    }

    return largestPalindrome;
}

int main() {
    printf("Solution for problem 4 = %d\n", findLargestPalindrome());
    return 0;
}