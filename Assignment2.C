#include<stdio.h>
int main()
{
    int i,j;
    float temparature[10],temp;
    printf("Enter a 10 city temparature :- \n");
    for (i=0;i<10;i++)
    {
        printf("city[%d] :- ",(i+1));
        scanf("%f",&temparature[i]);
    }
    for (i=0;i<10;i++)
    {
        for (j=0;j<10;j++)
        {
            if (temparature[i]>temparature[j])
            {
                temp=temparature[j];
                temparature[j]=temparature[i];
                temparature[i]=temp;
            }
        }
    }
    printf("\nThe minimum temparature of city is :- %.2f ",temparature[9]);
    printf("\nThe maximum temparature of city is :- %.2f ",temparature[0]);
    return 0;
}
