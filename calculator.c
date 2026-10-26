#include<stdio.h>
int main()
{
	int a,b,choice,ans;
	printf("Enter a");
	scanf("%d",&a);
	printf("Enter b");
	scanf("%d",&b);
	printf("1 for Addition");
	printf("2 for Subtraction");
	printf("3 for Multiplication");
	printf("4 for Division");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		ans=a+b;
		printf("%d is your Answer,ans");
		break;
		
		case 2:
		ans=a-b;
		printf("%d is your Answer,ans");
		break;
		
		case 3:
		ans=a*b;
		printf("%d is your Answer,ans");
		break;
		
		case 4:
		ans=a/b;
		printf("%d is your Answer,ans");
		break;
		
		default:
		printf("Enter valid choice");	
	}				
}
