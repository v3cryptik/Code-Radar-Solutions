// Your code here...
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    if (num & 1) { // Checking LSB using bitwise AND
        printf("Odd\n");
    } else {
        printf("Even\n");
    }
    
    return 0;
}
