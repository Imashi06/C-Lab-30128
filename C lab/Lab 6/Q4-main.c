//Question 4

#include<stdio.h>
int main()
{
    int radius,area,cir,diameter,PI=3.14;
    printf("Enter the radius");
    scanf("%d",&radius);

    printf("Diameter of the circle =%.2f\n",2*radius);
    printf("Circumference of the circle =%.2f\n",2*PI*radius);
    printf("Area of the circle=%.2f\n",PI*radius*radius);

}
