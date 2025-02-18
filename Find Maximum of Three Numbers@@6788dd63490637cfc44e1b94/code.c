// Your code here...
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    // Triangle condition: Sum of any two sides must be greater than the third side
    if (a > b && a > c) {
        printf("%d\n", a);
    } else if (a < b && b > c){
        printf("%d\n", b);
    }
    else {
        printf("%d", c);
    }
    
    return 0;
}
