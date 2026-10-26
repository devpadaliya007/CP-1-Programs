#include<stdio.h>
int main()
{
	int a,p;
	printf("Enter a:");
	scanf("%d",&a);
	p=++a;
	printf("p=%d",p);
	printf("\na=%d",a);
	p=a++;
	printf("\np=%d",p);
	printf("\na=%d",a);
}
