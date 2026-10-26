#include<stdio.h>
int main()
{
  int a,b,c,d,e,sum,average;
  printf("enter value of a:");
  scanf("%d" ,&a);
  printf("enter value of b:");
  scanf("%d" ,&b);
  printf("enter value of c:");
  scanf("%d" ,&c);
  printf("enter value of d:");
  scanf("%d" ,&d);
  printf("enter value of e:");
  scanf("%d" ,&e);
  sum=a+b+c+d+e;
  average=sum/5;
  printf("sum of numbers is:%d \n",sum);
  printf("average of number is:%d",average);
}
