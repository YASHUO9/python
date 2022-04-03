#include <stdio.h>
int main(){
    int arr[10],arr2[10],i,sum;
    printf("\n YASH PATHAK");
    printf("\n enter the element of the  size of the array");
    scanf("%d",&sum);
    printf("\nenter the element of the element of the array");
    for(i=0;i<sum;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<sum;i++){
        arr2[i]=arr[i];
    }
    printf("\n the copied array is ");
    for(i=0;i<sum;i++)
    printf("\n arr2[%d]=%d", i, arr2[i]);
    return 0;

}