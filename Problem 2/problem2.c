int fibonacciSum(int maxLimit) {
    int sum = 0;
    int prev = 1;
    int current = 2;

    while (current <= maxLimit) {
        if (current % 2 == 0) {
            sum += current;
        }

        int next = prev + current;
        prev = current;
        current = next;
    }
    return sum;
}

int main() {
    printf("Solution for problem 2 = %d\n", fibonacciSum(4000000));
    return 0;
}