#include<stdio.h>
#include<math.h>
int main()
{
	int p,t,r;
	float si,ci;
	printf("enter p t r values:");
	scanf("%d%d%d",&p,&t,&r);
	si=(p*t*r)/100.0;
	ci=p*pow(1+r/100.0,t)-p;
	printf("simple interst is: %f\n",si);
	printf("compound interst is: %f",ci);
	return 0;
}
