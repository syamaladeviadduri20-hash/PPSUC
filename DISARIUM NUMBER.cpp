#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, digit, count = 0, sum = 0;
    
    scanf("%d", &n);
    temp = n;

    // Count number of digits
    while(temp > 0) {
        count++;
        temp /= 10;
    }

    temp = n;

    // Calculate sum of digits raised to their positions
    while(temp > 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        count--;
        temp /= 10;
    }

    // Check if Disarium
    if(sum == n)
        printf("True");
    else
        printf("False");

    return 0;
}
