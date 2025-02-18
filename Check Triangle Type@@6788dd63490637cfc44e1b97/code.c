// Your code here...
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    // Check if the sides form a valid triangle
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        if (a == b && b == c) {
            printf("Equilateral\n");  // All three sides are equal
        } else if (a == b || b == c || a == c) {
            printf("Isosceles\n");  // Any two sides are equal
        } else {
            printf("Scalene\n");  // All three sides are different
        }
    } else {
        printf("Not a Triangle\n");  // Fails the triangle inequality theorem
    }
    
    return 0;
}
