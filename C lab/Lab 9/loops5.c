#include<stdio.h>
int main()
{
int no,reversedNum=0,digit;
printf("Enter the number");
scanf("%d",&no);

    do
    {
        digit=no%10;
        reversedNum=reversedNum*10+digit;
        no=no/10;

    }while(no>0);
printf("The reversed number : %d\n",reversedNum);
}
