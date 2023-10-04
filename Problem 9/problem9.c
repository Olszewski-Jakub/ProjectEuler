#include <stdio.h>

int findPythagoreanTripletProduct(int sum) {
    int a, b, c;
    int product = 0;

    for (a = 1; a < sum / 3; a++) {
        for (b = a + 1; b < sum / 2; b++) {
            c = sum - a - b;

            // Check if it's a Pythagorean triplet
            if (a * a + b * b == c * c) {
                product = a * b * c;
                return product; // Return the product once a triplet is found
            }
        }
    }

    return product; // Return 0 if no triplet is found
}

int main() {
    int sum = 1000;
    int product = findPythagoreanTripletProduct(sum);

    if (product != 0) {
        printf("Solution for problem 9 = %d\n", product);
    } else {
        printf("No Pythagorean triplet found that sums to %d.\n", sum);
    }
    return 0;
}
