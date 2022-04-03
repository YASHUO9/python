#include <stdio.h>
int main() {
    int n,i,j,a[10],num;
    printf("\n enter the size of the array: ");
    scanf("%d",&n);
    printf("\n yash pathak");
    printf("\n enter the element of the array: ");
    for (i=0;i<n;i++){
     scanf("%d",&a[i]);
}
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]>a[i])
            {
                num = a[i];
                a[i] = a[j];
                a[j] = num;
            }
        }
    }  
    
     printf("\n the second largest number is%d", a[n-2]);
     printf("\n the second smallest number is%d", a[n-4]);
     return 0;}

    