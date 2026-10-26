#include<stdio.h>
void main()
{
	int i,n1=1,sum=0;
	printf("First 50 even number");
	for(i=1; i<=50; n1++)
	{
		if(n1%2==0)
		{
			printf("%d",n1);
			i++;
			sum=sum+n1;
		}
	}
	printf("\nsum=%d",sum);
}
