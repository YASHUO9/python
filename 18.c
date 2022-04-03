#include <stdio.h>
int main() {
    int a,b,even=0,odd=0,arr[10];
    printf("\n enter the size of the array: ");
    scanf("%d",&a);
    printf("\n enter the element : ");
    for(b=0;b<a;b++) {
        scanf("%d",& arr[b]);
        if(arr[b]%2==0)
        even =even + arr[b];
        else
        odd =odd +arr[b];
    }
    printf(" sum of even indexed element in array is :%d\n",even);
    printf(" sum of odd indexed element in array is :%d\n",odd);
    return 0;
}