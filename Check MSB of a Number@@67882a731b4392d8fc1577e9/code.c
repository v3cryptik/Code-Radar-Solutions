#include <stdio.h>

int main() {
    int num, bits;
    scanf("%d", &num);

    // Get the number of bits in an integer (assuming 32-bit system)
    bits = sizeof(int) * 8;  

    // Create a mask with the MSB set (1 << (bits - 1))
    if (num & (1 << (bits - 1))) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }

    return 0;
}
