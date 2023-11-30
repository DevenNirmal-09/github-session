#include<stdio.h>
int function(int A[],int );
int main()
{
    int A[100],i,B,X,Y;
    printf("How many elements are in the array :- ");
    scanf("%d",&B);
    for (i=0; i<B; i++)
    {
        printf("A[%d] :- ",i);
        scanf("%d",&A[i]);
    }
    Y=function(A,B);
    if (Y==0)
    {
        printf("No elements are found in array ");
    }
    else
        printf("%d",Y);
    return 0;
}
int function(int A[],int B)
{
    int X;
    printf("Enter a number that you find in array :-");
    scanf("%d",&X);
    for (int i=0; i<B; i++)
    {
        if (A[i]==X)
        {
            return i+1;
            break;
        }
    }
    return 0;
}
