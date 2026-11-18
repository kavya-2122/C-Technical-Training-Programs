#include<stdio.h>
int main()
{
int n,last;
//int sum=0;
printf("enter number\n");
scanf("%d",&n);
int sum=0;
while(n>0)
{
last=n%10;
sum=sum+last;
n=n/10;
}
n=sum;
    printf("digital root is %d",sum);
    return 0;
}