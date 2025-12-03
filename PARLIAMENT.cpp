#include <stdio.h>

int main() {
    int a, b, c, d;
    int count = 0;

    // Input distances
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Check who is ahead of Bolt
    if (b > a)
        count++;
    if (c > a)
        count++;
    if (d > a)
        count++;

    // Output the number of participants in front of Bolt
    printf("%d", count);

    return 0;
}
