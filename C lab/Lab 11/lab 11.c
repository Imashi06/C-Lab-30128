#include<stdio.h>
int main()
{
    int size;
    int sum1=0,sum2=0;
    int i;

    printf("Enter the size of array");
    scanf("%d",&size);

    int arr1[size];
    for(i=0;i<size;i++)
    {
        printf("Input the %d value to the array  ",i+1);
        scanf("%d",&arr1 [i]);
        sum1 =arr1[i]+sum1;
    }
    printf("Scaler sum of array 1 is %d\n \n",sum1);

    int arr2[size];
    for(i=0;i<size;i++)
    {
        printf("Input the %d value to the array",i+1);
        scanf("%d",&arr2[i]);
        sum2 =arr2[i]+sum2;
    }
    printf("Scaler sum of array 2 is %d\n \n",sum2);

    int sum[size];
    for(i=0;i<size;i++)
    {
        sum[i]=arr1[i]+arr2[i];
    }
    printf("Vector sum of array 1 &2");
    for(i=0;i<size;i++)
    {
        printf("\t %d",sum[i]);
    }
    printf("Vector product of array 1 & 2");
    int tot,product;
    for(i=0;i<size;i++)
    {
    printf("%d",product [i]);
    tot=tot +product [i];
    }
    printf("Vector product is %d\n",tot);
    return 0;

}
