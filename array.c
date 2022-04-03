#include <stdio.h>
int main()
{
    int a[5],i,j;
    printf("\nenter the size of the array\n");
    scanf("%d",&j);
    for(i=0;i<j;i++)
    {
        printf("enter the %d element of the array\n",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<j;i++)
    {
        printf("enter the %d element of the array is:: %d\n",i,a[i]);
    }
    return 0;
}