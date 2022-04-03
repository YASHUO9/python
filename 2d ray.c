#include <stdio.h>
int main()
 {
    int i,j,a[3][3],row,col;
    printf("\n read a 2d array size ");
    printf("\n Yash pathak");
    printf("\n enter the row & column ");
    scanf("%d %d",&row,&col);
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++) 
        {
             printf("\n enter the arr[%d][%d]",i,j);
             scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
        printf("\n");
        for (j=0;j<3;j++)
        {
            printf("%d", a[i][j]);
            
        }
    }
 return 0;
}