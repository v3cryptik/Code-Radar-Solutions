#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;
    // Handle negative numbers by taking absolute value
    if (num < 0) num = -num;
    
    // Extract each digit and add to sum
    while (num > 0) {
        sum += num % 10; // Get the last digit
        num /= 10;       // Remove the last digit
    }
    return sum;
}

int main() {
    int N;
    // Read the size of the array
    scanf("%d", &N);
    
    int arr[N];
    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Calculate and print the sum of digits for each element
    for (int i = 0; i < N; i++) {
        int result = sumOfDigits(arr[i]);
        printf("%d", result);
        // Print a space after each number except the last one
        if (i < N - 1) {
            printf(" ");
        }
    }
    // Print a newline at the end
    printf("\n");
    
    return 0;
}