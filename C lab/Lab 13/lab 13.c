
//QUESTION 1//

#include<stdio.h>
void findSDP(int x,int y)
{
    int sum=0,diff,pro=0;
    sum= x+y;
    diff=x-y;
    pro=x*y;
    printf("The sum is %d\n The difference is %d\n The product is %d\n",sum,diff,pro);
}
int main()
{
    int no1,no2;
    printf("Enter two numbers");
    scanf("%d %d",&no1,&no2);
    findSDP(no1,no2);
}


