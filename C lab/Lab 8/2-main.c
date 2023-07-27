#include<stdio.h>
int main()
{
    //QUESTION 2

    int m,total=0,counter=1;
    float avg=0;
    while(counter<=10)
    {
        printf("Enter %d mark",counter);
        scanf("%d",&m);
        total=total+1;

        counter=counter+1;
    }
    avg=(float)total/10.0;
    printf("The total is %d",total);
    printf("The average is %.2f",avg);
    if (avg<50)
        printf("Fail\n");
    else
        printf("Pass\n");
}
