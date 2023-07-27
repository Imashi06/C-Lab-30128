//QUESTION 2//

#include<stdio.h>
double findPro (int x,float y)
{
    double pro=0;
    pro= x*y;
    return pro;
}
int main()
{
    int no1;
    float no2;
    printf("Enter two numbers");
    scanf("%d %f",&no1,&no2);
    printf("%lf is the product",findPro(no1,no2));
}
