#include<stdio.h>
void main()
{
	int n,flag=0;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			printf("Not prime");
		}
		else
		{
			("Prime");	
		}
	}
}
