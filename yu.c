#include<stdio.h>
int main()
 {  int a[5],b[5],i,n;
    printf("\nenter the size of the array\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
    
        printf("\n enter the element of the array\n");
        scanf("%d", &a[i]);
   }
   for (int i = 0; i < n;i++)
  {
    
      a[i] =b[i];
   }
    for(i=0;i<n;i++)
  {
        printf("%d", b[i]);
  }
     return 0;

}