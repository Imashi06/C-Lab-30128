#include<stdio.h>
int main()
{
    int i=1,fac=1,no;
    printf("Enter the number:");
    scanf("%d",&no);
    if(no<0)
    {
        printf("Invalid input");
        else if (no==0)
            printf("fractional =1");
        else
        for (i=1,i<no,i++)
        fac*=i;
        printf("fractional=%d",fac);
    }
}
