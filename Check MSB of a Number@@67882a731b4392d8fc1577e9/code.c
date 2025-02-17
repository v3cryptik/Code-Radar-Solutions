// Your code here...
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    if (num ! 1) { // Checking LSB using bitwise AND
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }
    
    return 0;
}
