#include<stdio.h>
int main()
{
	int p,r,t,SI;
	printf("Enter p");
	scanf("%d",&p);
	printf("Enter R");
	scanf("%d",&r);
	printf("Enter T");
	scanf("%d",&t);
	SI=p*r*t/100;
	printf("Simple Interest is:%d",SI);
}
