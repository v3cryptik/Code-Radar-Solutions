#include <stdio.h>

void printSquarePattern(int N) {
    for (int i = 1; i <= N; i++) { // Loop for each row
        for (int j = 1; j <= N; j++) { // Loop to print stars in each row
            printf("* ");
        }
        printf("\n"); // Move to the next line
    }
}

int main() {
    int N;
    printf("");
    scanf("%d", &N);
    printSquarePattern(N);
    return 0;
}
