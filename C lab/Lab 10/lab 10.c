#include<stdio.h>
int main()
{
    int arr [10],i,max,mini,sum=0;
    float avg=0;


for(i=0;i<10;i++)
{
    printf("Enter a value to the element %d",i+1);
    scanf("%d",&arr[10]);
    sum= sum +arr[i];
}
max =arr[0];
mini= arr[0];

for (i=0;i<10;i++)
{
    if (arr[i]>max)
        max=arr [i];
    if (arr[i]<mini)
        mini = arr [i];
}
avg =(float)sum/10;
printf("The maximum value is %d \n",max);
printf("The minimum value is %d \n",mini);
printf("The average is %.2f\n",avg);

printf("Reverse array elements");
for (i=9;i>=0;i--)
{
    printf("%d\t",arr[i]);
}
}
