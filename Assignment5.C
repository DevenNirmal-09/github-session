#include<stdio.h>
#include<ctype.h>
int main()
{
    int i;
    char s1[10];
    printf("Enter a string :-");
    gets(s1);
    for (i=0;i<10;i++)
    {
        if (islower(s1[i]))
        {
            s1[i]=toupper(s1[i]);
        }
        else if(isupper(s1[i]))
        {
            s1[i]=tolower(s1[i]);
        }
    }
    printf("\nconverted string :-");
    puts(s1);
}
