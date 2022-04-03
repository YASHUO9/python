#include<stdio.h>
int main()
 {
    int arr[3][3],i,j,row,column;
    printf("\n Yash pathak");
    printf("\n enter the size of the row and column");
    scanf("%d %d",&row, &column);
    for (i = 0; i <= row; i++)
    {
        for (j = 0; j <=column; j)
        {
            printf("\n enter arr[%d][%d]:",i,j);
            scanf("%d %d",&arr[i][j]);

        }
    }
    printf("\nmatrix is :");
    for(i=0;i<row;i++)
    {
       for(j=0;j<column;j++)
        {
            printf("\n");
            printf("%d",arr[i][j]);
        }
        
    }
    return 0;
}