#include<stdio.h>
#include<string.h>
int main()
{
    int l;
    char s1[100],s2[100];
    printf("Enter a string :- ");
    gets(s1);
    printf("The length of string is :- %d\n",strlen(s1));
    printf("the reverse strnig :- ");
    puts(strrev(s1));
    l=strcmp(s1,s2);
    if (l==1)
    {
        printf("\nTwo string are not equal ");
    }
    else
    {
        printf("\nTwo string are equal ");
    }

    return 0;
}
