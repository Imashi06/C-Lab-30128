#include<stdio.h>
int main()
{
    int no1=0, no2=1,next,i;
    printf("Fibonacci Sequence :%d %d",no1,no2);

    for(i=3;i<=10;i++)
    {
        next =no1+no2;
        printf("%d",next);
        no1=no2;
        no2 =next;
    }
    printf("\n");

}
