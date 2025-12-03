#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    for (int i = A; i <= B; i++) {
        printf("%d ", i);
    }

    return 0;
}
