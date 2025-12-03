#include <stdio.h>

int findPosition(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    // If not found, low is the correct insertion position
    return low;
}

int main() {
    int Q;
    scanf("%d", &Q);

    while (Q--) {
        int N, T;
        scanf("%d %d", &N, &T);

        int arr[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }

        int pos = findPosition(arr, N, T);
        printf("%d", pos);
    }

    return 0;
}

