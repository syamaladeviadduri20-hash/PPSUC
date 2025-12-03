#include <stdio.h>

int main() {
    int n, rem;
    int sum = 0, product = 1;

    scanf("%d", &n);

    int temp = n;

    while(temp > 0) {
        rem = temp % 10;
        sum += rem;
        product *= rem;
        temp /= 10;
    }

    if(sum == product)
        printf("Spy Number");
    else
        printf("Not Spy Number");

    return 0;
}

