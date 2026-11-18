#include<stdio.h>
int main()
{
int n,rev=0;
printf("enter number\n");
scanf("%d",&n);
int original=n;
while(n>0)
{
int last=n%10;
rev=rev*10+last;
n=n/10;
}
printf("%d\n",rev);
if(rev==original)
{
printf("%d is a palidrome\n",original);
}
else{
printf("%d is not palindrome \n",original);
}
return 0;
}
