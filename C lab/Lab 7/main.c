#include <stdio.h>
#include <stdlib.h>

int main()
{
   int no,ans;
    printf("Enter the number");
    scanf("%d",&no);
    ans=no%2;
    if(ans==0)
        printf("%d is an even number\n",no);
    else
        printf("%d is an odd number\n",no);

    int num,a;
    printf("Enter the number");
    scanf("%d",&num);
    a=num%2;
    switch(a==0)
        {
            case '1':printf("odd number");break;
            case'0':printf("even number");break;
        }
}
