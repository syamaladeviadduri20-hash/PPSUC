#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if (x<3)
    printf("LIGHT");
    else if (x<7&&x>=3)
    printf("MODERATE");
    else 
    printf("HEAVY");
}
