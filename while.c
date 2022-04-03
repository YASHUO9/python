#include <stdio.h>
int main()
{ int i,j,k;
    do  {
        printf("\n enter the number to check\n");
    scanf("%d", &j);
    if (j%2 == 0)
    printf("\n number is even\n");
    else 
    printf("\n number is odd\n");
      printf("\n would you like to check again?  y(1) or n(0)\n");
    scanf("%d", &k);}
    while (k==1)
   { printf("\n enter the number to check\n");
    scanf("%d", &j);
    if (j%2 == 0)
    printf("\n number is even\n");
    else 
    printf("\n number is odd\n");
  
    
    
    }





    return 0;
}