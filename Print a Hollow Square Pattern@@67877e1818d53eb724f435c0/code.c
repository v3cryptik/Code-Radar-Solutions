#include <stdio.h>

void printHollowSquare(int N) {
    for (int i = 1; i <= N; i++) { // Loop for each row
        for (int j = 1; j <= N; j++) { // Loop to print stars and spaces
            if (i == 1 || i == N || j == 1 || j == N) {
                printf("*"); // Print stars on the boundary
            } else {
                printf(" "); // Print spaces inside the square
            }
        }
        printf("\n"); // Move to the next line
    }
}

int main() {
    int N;
    printf("");
    scanf("%d", &N);
    printHollowSquare(N);
    return 0;
}
