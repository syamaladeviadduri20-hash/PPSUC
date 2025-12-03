#include <stdio.h>

int main() {
    int A;

    // Input number
    scanf("%d", &A);

    // Check conditions
    if (A % 2 == 0 && A % 7 == 0) {
        printf("Alice");
    }
    else if (A % 2 != 0 && A % 9 == 0) {
        printf("Bob");
    }
    else {
        printf("Charlie");
    }

    return 0;
}
