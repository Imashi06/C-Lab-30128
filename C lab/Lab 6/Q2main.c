//Question 2

#include<stdio.h>
int main()
{
    int no1,no2,no3,largest,smallest;
    printf("Enter three numbers");
    scanf("%d,%d,%d",&no1,&no2,&no3);
    if(no1>no2)
    {
        if(no1>no3)
            largest=no1;
    else
            largest =no3;
    }
    else
    {
        if(no2>no3)
        largest =no2;
    else
        largest=no3;
    }
    if(no1<no2)
    {
        if(no1<no3)
        smallest=no1;
    else
        smallest=no3;
    }
    else
    {
        if(no2<no3)
            smallest =no2;
        else
            smallest =no3;
    }
    printf("%d is the largest number\n",largest);
    printf("%d is the smallest number\n",smallest);
}
