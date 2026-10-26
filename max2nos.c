#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter number:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c){
		if(b>c)
		{
			printf("b is max");
		}
		else
		{
			printf("c is max");
		}
	}
	else if(b>a && b>c){
		if(a>c)
		{
			printf("a is max");
		}
		else
		{
			printf("c is max");
		}
	}
	else if(a>c && a>b58/20){
		if(a>c)
		{
			printf("a is max");
		}
		else
		{
			printf("c is max");
		}
	}
}
