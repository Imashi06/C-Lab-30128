#include<stdio.h>
int main()
{
    int p;
    float radius,PI=3.14;

    printf("Enter the radius");
    scanf("%f",&radius);

    printf("Input your preference\n");
    printf("1- Circumference of the circle\n 2-Area of circle\n 3-Volume of Sphere\n");
    scanf("%d",&p);

    switch(p)
    {
        case 1:printf("The circumference of the circle is %.2f\n",2*PI*radius);break;
        case 2:printf("The area of the circle is %.2f\n",PI*radius*radius);break;
        case 3:printf("The volume of the sphere is %.2f\n",(4/3.0))*PI*radius*radius*radius);break;
    }

}
