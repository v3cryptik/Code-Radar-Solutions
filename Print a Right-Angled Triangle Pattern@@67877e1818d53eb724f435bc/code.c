#include <stdio.h>

void printRightAngledTriangle(int N) {
    for (int i = 1; i <= N; i++) { // Loop for each row
        for (int j = 1; j <= i; j++) { // Loop to print stars in each row
            printf("* ");
        }
        printf("\n"); // Move to the next line
    }
}

int main() {
    int N;
    printf("");
    scanf("%d", &N);
    printRightAngledTriangle(N);
    return 0;
}

