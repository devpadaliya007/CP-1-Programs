#include<stdio.h>
void main()
{
	int i=110;
	printf("\nOdd number between 110 to 130:");
	while(i <= 130)
	{
		if(i %2==1)
		{
			printf("\n%d",i);
		}
		i++;
   	}
	i=110;
	do
	{
	 	if(i%2==1)
		 {
		 	printf("\n%d",i);	
		 }	
		 i++;
	}while(i <= 130);
}
