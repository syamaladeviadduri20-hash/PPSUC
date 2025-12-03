#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    // Euclidean Algorithm
    while (M != 0) {
        int temp = M;
        M = N % M;
        N = temp;
    }

    printf("%d", N);

    return 0;
}
