#include<stdio.h>
void main()
{
	float side,height,length,breadth,area,radius,base;
	int fig_code;
	printf("\n1 for Circle");
	printf("\n2 for Rectangle");
	printf("\n3 for Triangle");
	printf("\n4 for Square");
	printf("\nEnter the Number between 1-4");
	scanf("%d",&fig_code);
	{
		switch(fig_code){
		
		
			case 1:
				printf("Enter the Radius:");
				scanf("%f",&radius);
				area=3.14*radius*radius;
				printf("Area of Circle=%f",area);
				break;
			
			case 2:
				printf("Enter the Length and Breadth:");
				scanf("%f %f",&length,&breadth);
				area=length*breadth;
				printf("Area of Rectangle=%f",area);
				break;
			
			case 3:
				printf("Enter the  Base and Height:");
				scanf("%f %f",&base,&height);
				area=0.5*base*height;
				printf("Area of Triangle=%f",area);
				break;
			
			case 4:
				printf("Enter the Side");
				scanf("%f",&side);
				area=side*side;
				printf("Area of Square=%f",area);
				break;
		}
	}
}
