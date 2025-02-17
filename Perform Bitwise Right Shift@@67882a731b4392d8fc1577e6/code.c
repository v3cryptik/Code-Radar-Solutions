// Your code here...
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    int result = a >> b; // Bitwise OR operation
    printf("%d\n", result);
    
    return 0;
}
