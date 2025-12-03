#include <stdio.h>

int main() {
    int costPrice, sellingPrice;

    // Input cost price and selling price
    scanf("%d", &costPrice);
    scanf("%d", &sellingPrice);

    // Check profit, loss or no profit/loss
    if (sellingPrice > costPrice) {
        printf("Profit");
    } 
    else if (sellingPrice < costPrice) {
        printf("Loss");
    } 
    else {
        printf("No Profit and No Loss");
    }

    return 0;
}
