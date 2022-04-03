#include <stdio.h>
int main()
{
    int sum,j,column,row,i,arr[5][5],arr2[5][5];
    printf("\n Yash pathak");
    printf("\n enetr the row size");
    scanf("%d",&row);
    printf("\n enter the column size");
    scanf("%d",&column);
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<column;j++)
        {
            printf("\n enter the arr[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n enter the row size");
    scanf("%d",&row);
    printf("\n enter the column size");
    scanf("%d",&column);
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<column;j++)
        {
            printf("\n enter the arr2[%d][%d]:",i,j);
        }
    }
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<column;j++)
        {
            sum = arr[i][j]*arr2[i][j];
            printf("%d", sum);
        }
        printf("\n");
    }
    return 0;
}