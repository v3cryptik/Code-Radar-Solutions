#include <stdio.h>

void printPyramidTriangle(int N) {
    for (int i = 1; i <= N; i++) { // Loop for each row
        for (int j = 1; j <= N - i; j++) { // Print spaces
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) { // Print stars
            printf("*");
        }
        printf("\n"); // Move to the next line
    }
}

int main() {
    int N;
    printf("");
    scanf("%d", &N);
    printPyramidTriangle(N);
    return 0;
}