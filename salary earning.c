#include<stdio.h>
int main()
{
int salary;
printf("enter salary\n");
scanf("%d",&salary);
if(salary>=1 && salary<=9)
{
printf("earning insufficient");
}
else if(salary>=10 && salary<=99)
{
printf("very low earning");
}
else if(salary>=100 && salary<=999)
{
printf("insufficient earning");
}
else if(salary>=1000 && salary<=9999)
{
printf("sufficient earning");
}
return 0;
}
