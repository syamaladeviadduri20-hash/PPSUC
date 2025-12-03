#include<stdio.h>
int main()
{
    int x,n,m;
    scanf("%d%d%d",&x,&n,&m);
    if ((n-x)<=m)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
