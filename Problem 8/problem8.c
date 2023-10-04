#include <stdio.h>
#include <stdlib.h>

#define ADJACENT_DIGITS 13

long long findGreatestProduct(char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening the file");
        exit(1);
    }

    char digit;
    int digits[ADJACENT_DIGITS];
    long long maxProduct = 0;
    long long currentProduct = 1;

    // Initialize the array with the first ADJACENT_DIGITS digits
    for (int i = 0; i < ADJACENT_DIGITS; i++) {
        digit = fgetc(file);
        if (digit == EOF) {
            fclose(file);
            return maxProduct;
        }
        digits[i] = digit - '0';
        currentProduct *= digits[i];
    }

    while ((digit = fgetc(file)) != EOF) {
        int firstDigit = digits[0];
        for (int i = 1; i < ADJACENT_DIGITS; i++) {
            digits[i - 1] = digits[i];
        }
        digits[ADJACENT_DIGITS - 1] = digit - '0';

        if (firstDigit == 0) {
            currentProduct = 1;
            for (int i = 0; i < ADJACENT_DIGITS; i++) {
                currentProduct *= digits[i];
            }
        } else {
            currentProduct = (currentProduct / firstDigit) * digits[ADJACENT_DIGITS - 1];
        }

        if (currentProduct > maxProduct) {
            maxProduct = currentProduct;
        }
    }

    fclose(file);
    return maxProduct;
}

int main() {
    char *filename = "Problem 8/numbers.txt"; // Replace with your file path
    long long result = findGreatestProduct(filename);

    printf("Solution for problem 8 = %lld\n", result);
    return 0;
}
