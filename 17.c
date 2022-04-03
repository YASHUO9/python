#include <stdio.h>
int main() {
    int a[5],i,even =0,odd =0;
    printf("\n the array size is: ");
    scanf("%d", &i);
    for (int i=0;i<5;i++) {
        printf("\n enter the element of the array: ",i+1);
        scanf("%d",&a[i]);
    }
    for (int i=0;i<5;i++) {
        if (a[i]%2==0)
        even =even+1;
        else
        odd=odd+1;
    }
    printf("\n the even element are %d ",even);
    printf("\n the odd element are %d ",odd);
    return 0;
}