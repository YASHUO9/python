#include <stdio.h>
int main(){
    int i,j,a[5],search,n;
    printf("\n enter the size of the array ");
    scanf("%d",&n);
    printf("\n enter the element of the array ");
    for(i=0;i<n;i++)
    {
     printf("%d element of the array is::", i+1);
     scanf("%d",&a[i]);
    }
do{
    printf("\n enter the element you wish to search: ");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        printf("\n %d element is present in %d the array: ", search, i+1);
        else
        printf("\n %d element is not present in the array", search);
    }
    printf("\n would you like to search again if yes enter 1 or if no enter 0: ");
    scanf("%d",&j);
}
while(j==1);
printf("\n thank you for using my program");
return 0;
}