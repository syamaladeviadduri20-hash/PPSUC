#include <stdio.h>

int main() {
    char s[10001];
    scanf("%s", s);   // Reads a single word string

    for (int i = 0; s[i] != '\0'; i++) {
        // If uppercase A–Z, convert to lowercase
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] - 'A' + 'a';
        }
    }

    printf("%s", s);

    return 0;
}

