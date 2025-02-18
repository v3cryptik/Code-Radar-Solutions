// Your code here...
#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    
    // Check if the character is a digit (0-9)
    if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    }
    // Check if the character is an uppercase or lowercase vowel
    else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
             ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("Vowel\n");
    }
    // Check if the character is an uppercase or lowercase letter (consonant)
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("Consonant\n");
    }
    // If it's not a letter or digit, it must be a special character
    else {
        printf("Special Character\n");
    }

    return 0;
}
