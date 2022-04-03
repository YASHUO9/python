#include <stdio.h>
int main ()
{
    int i,first,middle,n,search,last,array[5];
    printf("enter the size of the array: ");
    scanf("%d",&n);
    printf("enter the element of the array: ");
    for (i=0;i<n;i++)
    {printf("enter the %d element of the array: ",i+1);
    scanf("%d",&array[i]);}
    printf("enter the element you wish to search in the array: ");
    scanf("%d",&search);
    first=0;
    last=n-1;
    middle =(first+last)/2;
    while (first<=last)
     {  if(array[middle]<search) 
         first=middle+1; 
         else if(array[middle]==search)
        {printf("%d is present at index %d .\n", search,middle+1);
        break;
        }
        else 
        last =middle -1;
        middle =(first+last)/2;
     }
        if(first>last) 
        printf("not found %d is not present in the list.\n", search);
        return 0;
} 
      
     
     
     
     
     
     
     
     


