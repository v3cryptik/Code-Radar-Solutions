// Your code here...
#include <stdio.h>

int main() {
    int num1, num2, result;
    char op;
    
    scanf("%d %d %c", &num1, &num2, &op);
    
    switch (op) {
        case '+': 
            result = num1 + num2;
            printf("%d\n", result);
            break;
        case '-': 
            result = num1 - num2;
            printf("%d\n", result);
            break;
        case '*': 
            result = num1 * num2;
            printf("%d\n", result);
            break;
        case '/': 
            if (num2 == 0) {
                printf("Error\n"); // Handle division by zero
            } else {
                printf("%d\n", num1 / num2);
            }
            break;
        default:
            printf("Error\n"); // Handle invalid operator
    }

    return 0;
}
