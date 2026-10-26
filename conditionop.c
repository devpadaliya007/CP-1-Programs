#include <stdio.h>
void main()
{
	int n1,n2,ans;
	printf("Enter two number:");
	scanf("%d %d",&n1,&n2);
	ans=(n1>n2)?n1:n2;
	printf("%d is max",ans);
}
