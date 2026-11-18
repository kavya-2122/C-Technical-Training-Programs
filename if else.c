#include<stdio.h>
int main()
{
int ticket;
    printf("how many members\n");
    scanf("%d",&ticket);
    if(ticket>=1)
    {
    printf("allow theater");
    }
    else
    {
    printf("not allow to theater");
    }
    return 0;
}