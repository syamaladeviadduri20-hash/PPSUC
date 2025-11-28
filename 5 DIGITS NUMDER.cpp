#include<stdio.h>
int main()
{
	int n,rem;
	printf("enter a 5-digit number:");
	scanf("%d",&n);
	int sum=0;
	while (n!=0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("digit sum : %d",sum);
	return 0;
}
