#include<stdio.h>
int main()
{
int n,last;
int sum=0;
printf("enter number\n");
scanf("%d",&n);
while(n>0)
{
last=n%10;
sum=sum+last;
n=n/10;
}
    printf("sum of digits is %d",sum);
    return 0;
}