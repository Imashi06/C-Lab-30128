//Qustion1

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no1,no2,max;
    printf("Enter the first number");
    scanf("%d",&no1);
    printf("Enter the second number");
    scanf("%d",&no2);
    if(no1>no2)
        max=no1;
    else
        max=no2;
    printf("The highest number is %d\n",max);
}
