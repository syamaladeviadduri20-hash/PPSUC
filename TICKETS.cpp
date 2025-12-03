#include <stdio.h>

int main() {
    char ch;

    // Input
    scanf("%c", &ch);

    // Convert to uppercase if lowercase entered
    if (ch >= 'a' && ch <= 'z') {
        ch = ch - 'a' + 'A';
    }

    // Check color code
    switch (ch) {
        case 'V':
            printf("Violet");
            break;
        case 'I':
            printf("Indigo");
            break;
        case 'B':
            printf("Blue");
            break;
        case 'G':
            printf("Green");
            break;
        case 'Y':
            printf("Yellow");
            break;
        case 'O':
            printf("Orange");
            break;
        case 'R':
            printf("Red");
            break;
        default:
            printf("-1");
    }

    return 0;
}
