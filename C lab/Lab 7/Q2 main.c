#include<stdio.h>
int main()
{
    int choice,no1,no2;
    printf("Menu:\n");
    printf("Addition\n");
    printf("Substraction");
    printf("Multiplication");
    printf("Division\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    printf("Enter two numbers");
    scanf("%d%d",&no1,no2);

    switch(choice)
    {
        case 1:printf("Result:&d\n",no1,no2);break;
        case 2:printf("Result:&d\n",no1,no2);break;
        case 3:printf("Result:&d\n",no1,no2);break;
        case 4:printf("Result:&d\n",no1,no2);break;
        default:printf("Invalid choice \n");
    }
}
