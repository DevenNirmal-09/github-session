#include<stdio.h>
int main()
{
    char s1[100],ch;
    int i,j;
    printf("Enter a string :- ");
    gets(s1);
    printf("Enter a character :-  ");
    scanf("%c",&ch);
    for (i=0;i<100;i++)
    {
        if (s1[i]==ch)
        {
            s1[i]=s1[i+1];
            for (j=i+1;j<100;j++)
            {
                s1[j]=s1[j+1];
            }
        }
    }
    printf("new string :- ");
    puts(s1);
    return 0;
}
