#include <stdio.h> 
int main()
{int i,j,sum=0,k,avg=0;
 printf("\n enter the 1st number\n");
 scanf("%d",&i);
 printf("\n enter the 2nd number\n");
 scanf("%d",&j);
 printf("\n enter the 3rd number\n");
 scanf("%d",&k);
  sum = i+ j+ k;
  avg=sum/3;
 printf("\n the number sum is %d and avg is %d\n",sum,avg);
  return 0;
  }