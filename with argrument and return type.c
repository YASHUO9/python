#include<stdio.h>

int sum(int , int );
int main(){
    int x,y,c;
    printf("\n enter a&b\n");
    scanf("%d %d",&x,&y);
    c =sum(x,y);
    printf("sum =%d",c);
}
  int sum(int a,int b)
 { 
 return a+b;
 }
