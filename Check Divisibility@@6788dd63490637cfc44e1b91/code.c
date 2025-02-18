// Your code here...
#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    
    // Leap year conditions
    if (a % 5 == 0 && a % 11 == 0) {
        printf("Divisible\n");
    } else {
        printf("Not Divisible\n");
    }
    
    return 0;
}
