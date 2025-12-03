#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if ((a==(11-b))||(b==(11-a))||(a==(1+b))||((b==1+a)))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
