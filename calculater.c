#include<stdio.h>
void main()
{
	int choice;
	float ans,a,b;
	

	printf("enter a:");
	scanf("%f",&a);
	printf("enter for b:");
	scanf("%f",&b);
	printf("enter 1. for addition \n 2. for substraction \n n3. for multiplication \n 4. for division");
		printf("enter for choice");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			ans=a+b;
			printf("ans =%f",ans);
			break;
			
		case 2:
			ans=a-b;
			printf("ans =%f",ans);
			break;
		case 3:
			ans=a*b;
			printf("ans =%f",ans);
			break;
		case 4:
			if(b!=0)
			{
				ans=a/b;
			}
			{
				printf("b>0");
			}
		    break;
			default:
				printf("enter choice beetween 1 to 5");
	}
}
