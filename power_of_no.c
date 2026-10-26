#include<stdio.h>
void main()
{
	int n,power,ans=1,i=1;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter power:");
	scanf("%d",&power);
	while(i<=power)
	{
		ans=ans*n;
		i++;
	}
	printf("%d",ans);	
}
