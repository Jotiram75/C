#include<stdio.h>

int main()
{
    int x[10][10],y[10][10],z[10][10],i,j,row,column;
    printf("Enter the row:");
    scanf("%d",&row);
    printf("Enter the column:");
    scanf("%d",&column);
    printf("Enter 1st Matrix:");
    for ( i=0; i<row; i++)
    {
        for (j=0; j<column; j++)
        {
            scanf("%d",&x[i][j]);
        }
        
    }
    printf("Enter 2nd Matrix:");
    for ( i=0; i<row; i++)
    {
        for (j=0; j<column; j++)
        {
            scanf("%d",&y[i][j]);
        }
    }
        
        for ( i=0; i<row; i++)
    {
        for (j=0; j<column; j++)
        {
            z[i][j]=x[i][j]+y[i][j];
        }
    }
    printf("Addition Of Two Matrix Is\n");
    for ( i=0; i<row; i++)
    {
        for (j=0; j<column; j++)
        {
            printf("%d  ",z[i][j]);
        }
        printf("\n");
    }
    return 0;
}