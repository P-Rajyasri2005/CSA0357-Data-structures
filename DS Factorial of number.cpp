#include<stdio.h>
int main()
{
   int n,i,product=1;
    printf("enter the number:");
    scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
	product*=i;
   }
  printf("factorial of given number is:%d\n",product);
  return 0;
}