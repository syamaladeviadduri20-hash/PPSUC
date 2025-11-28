#include<stdio.h>
int main()
{
	int a=10,b=10,x,y;
	x=++a;
	printf("%d%d\n",x,a);
	x=a++;
	printf("%d%d\n",x,a);
	y=--b;
	printf("%d%d\n",y,b);
	y=b--;
	printf("%d%d\n",y,b);
	return 0;
}
