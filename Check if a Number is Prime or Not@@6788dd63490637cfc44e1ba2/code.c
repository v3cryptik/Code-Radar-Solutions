// Your code here...
#include <stdio.h>

int main() {
    int num, i, isPrime = 1;
    scanf("%d", &num);
    
    // A prime number must be greater than 1
    if (num <= 1) {
        printf("Not Prime\n");
        return 0;
    }

    // Checking divisibility from 2 to sqrt(num) for efficiency
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = 0;
            
        }
    }

    // Output result
    if (isPrime)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}
