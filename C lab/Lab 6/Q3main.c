//Question 3

#include<stdio.h>
int main()
{
    char e_name;
    float ns,bs,inc;
    printf("Enter employee name");
    scanf("%c",&e_name);
    printf("Enter the basic salary");
    scanf("%d"&bs);
    if (bs>=10000)
        inc=bs*1.5;
    else if(bs>=5000)
        inc=bs*1.0;
    else
        inc=bs*0.5;
    ns=bs+inc;
    printf("%s is the employee name\n",name);
    printf("%.2f is the new salary\n",ns);
}
