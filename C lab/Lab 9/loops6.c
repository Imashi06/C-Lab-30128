#include<stdio.h>
int main()
{
    int base,expo,result=1;
    printf("Enter the base value");
    scanf("%d",&base);
    printf("Enter the exponent");
    scanf("%d",&expo);

    for (int i=0;i<expo;i++)
    {
        result*=base;
    }
    printf("The power : %d",result);
}
