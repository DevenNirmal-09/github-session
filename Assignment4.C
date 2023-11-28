#include<stdio.h>
int main()
{
    int s[5][6],i,j,total[5]={0};
    float per[5];
    for (i=0;i<5;i++)
    {
        printf("Enter student %d marks :- \n",i+1);
        for (j=0;j<6;j++)
        {
            printf("Mark %d :- ",j+1);
            scanf("%d",&s[i][j]);
            total[i]=total[i]+s[i][j];
        }
        per[i]=(float)total[i]/6;
    }
    for(i=0;i<5;i++)
    {
        printf("percentage of %d student :- %.2f\n",i+1,per[i]);
    }
    return 0;
}
