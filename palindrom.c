//palindrom
#include<stdio.h>
void main()
{
	int n1,n2,rem;
	printf("Enter the number:");
	scanf("%d",&n1);
	int temp=n1;
	while(n1!=0)
	{
		rem=n1%10;
		n2=n2*10+rem;
		n1=n1/10;
	}
	if(temp==n2)
	{
		printf("Number is Palindrom");
	}
	else
	{
		printf("Number is  not Palindrom");
	}
}
