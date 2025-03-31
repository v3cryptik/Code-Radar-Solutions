#include <stdio.h>

void printInvertedTriangle(int N) {
    for (int i = N; i <= 1; i++) { // Loop for each row
        for (int j = 1; j <= i; j++) { // Loop to print stars in each row
            printf("*");
        }
        printf("\n"); // Move to the next line
    }
}

int main() {
    int N;
    printf("");
    scanf("%d", &N);
    printInvertedTriangle(N);
    return 0;
}
