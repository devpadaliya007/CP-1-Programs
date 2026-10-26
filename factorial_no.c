#include<stdio.h>
void main()
{
	int n,fact=1,i=1;
	printf("Enter the n:");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	{
		printf("%d",fact);
	}
}
