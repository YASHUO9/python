#include<stdio.h>

void sum(float,float);//declare function
void main(){
    float a,b;
    printf("\n enter a&b\n");
    scanf("%f %f",&a,&b);
    sum(a,b);
}
 void sum(float x,float y)
 { float s=0;
 s=x+y;printf("sum = %f\n",s);
 }
