#include<stdio.h>
int main()
{
    int no,sum=0,digit;
    printf("Enter a number");
    scanf("%d",&no);

    while(no>0)
    {
        digit=no%10;
        sum=sum+digit;
        no=no/10;
    }
    printf("The sum is %d\n",sum);
}






