#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character");
    scanf("%c"&ch);

    switch()
    {
        case 'a':printf("a is a vowel");break;
        case 'e';printf("e is a vowel");break;
        case 'i';printf("i is a vowel");break;
        case 'o';printf("o is a vowel");break;
        case 'u';printf("u is a vowel");break;
    }
    default:printf("%dc is not a vowel",ch);
}
