#include<stdio.h>
int main()
{
	float w,h,BMI;
	printf("Enter Height in feet:");
	scanf("%f",&h);
	printf("Enter Weight in kg:");
	scanf("%f",&w);
	h=h/3.28084;
	BMI=w/(h*h);
	if(BMI>=18.5 && BMI<=24.9)
	{
		printf("You are healthy");
	}
	else
	{
		printf("You are unhealthy");
	}
}
