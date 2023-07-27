//Question 5

#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter two numbers");
    scanf("%d,%d",&n1,&n2);
    if (n1%n2--0)
        printf("\n%d is a multiple of %d.\n",n1,n2);
    else
        printf("\n %d is not a multiple of %d.\n",n1,n2);
}
