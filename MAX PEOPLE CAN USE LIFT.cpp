#include <stdio.h>

int main() {
    int Maxp, Maxw;
    scanf("%d %d", &Maxp, &Maxw);

    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort weights (ascending)
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int count = 0;
    int total = 0;

    for (int i = 0; i < N; i++) {
        if (count < Maxp && total + arr[i] <= Maxw) {
            total += arr[i];
            count++;
        } else {
            break;
        }
    }

    printf("%d", count);

    return 0;
}

