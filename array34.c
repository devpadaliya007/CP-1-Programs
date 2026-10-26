#include<stdio.h>
void main(){
	int a[3][3],b[3][3],i,j;
	for(i=0;i<3;i++)
	{
	      for(j=0;j<3;j++)
	      {
	      	printf("Enter data element:");
	      	scanf("%d",&a[i][j]);
		  }
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
	      for(j=0;j<3;j++)
	      {
	      	printf("Enter data element:");
	      	scanf("%d",&b[i][j]);
		  }
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}
