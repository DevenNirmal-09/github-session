#include<stdio.h>
int main()
{
    int A[10],i,j,temp;
    printf("Enter a 10 number :- \n");
    for (i=0;i<10;i++)
    {
        printf("A[%d] :- ",(i+1));
        scanf("%d",&A[i]);
    }
    for (i=0;i<10;i++)
    {
        for (j=0;j<10;j++)
        {
            if (A[i]>A[j])
            {
                temp=A[j];
                A[j]=A[i];
                A[i]=temp;
            }
        }
    }
    printf("\n\nIn reverse order \n");
    for (i=0;i<10;i++)
    {
        printf("A[%d] = %d\n",i+1,A[i]);
    }
    return 0;
}
