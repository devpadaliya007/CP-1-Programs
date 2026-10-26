#include<stdio.h>
int main()
{
	int n1,n2,and,or,not;
	printf("Enter n1,n2");
	scanf("%d %d",&n1,&n2);
	and=n1&n2;
	or=n1|n2;

	printf("\n  and=%d",and);
	printf("\n  or=%d",or);
     n1=1;
     not=!n1;
     printf("\n  not n1=%d",not);
     
     n2=0;
     not=!n2;
     printf("\n  not n2=%d",not);
     
     
}
