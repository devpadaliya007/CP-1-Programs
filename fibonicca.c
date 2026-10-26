#include<stdio.h>
void main()
{
	int a=0,b=1,c,n,i=3;
	printf("Enter n");
	scanf("%d",&n);
	printf("%d",a);
	printf("%d",b);
	while(i<=n)
	{
		c=a+b;
		printf("%d",c);
		a=b;
		b=c;
		i++;
	}
}
