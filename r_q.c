#include<stdio.h>
int main()
{
	   int Divident,Divisor,Quotient,Remainder;
	   printf("Enter Divident:");
	   scanf("%d",&Divident);
	   printf("Enter Divisor:");
	   scanf("%d",&Divisor);
	   Quotient=Divident/Divisor;
	   Remainder=Divident%Divisor;
	   printf("Quotient:%d",Quotient);
	   printf("Remainder:%d",Remainder);	   
}
