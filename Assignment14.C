#include<stdio.h>
int fun(int n);
int main()
{
    int n,a;
    printf("Enter a number :- ");
    scanf("%d",&n);
    a=fun(n);
    printf("the sum :- %d",a);
    return 0;
}
int fun(int n)
{
    int sum=0,b;
    if (n<10)
    {
        return n;
    }
    else
    {
        sum=n%10 + fun(n/10);
    }
    return sum;
}
