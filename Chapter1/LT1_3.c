#include<stdio.h>


int main()     
{
    float a,b,c;
    printf("Enter Two Numbers: \n");

     scanf("%f",&a);
     scanf("%f",&b);
     scanf("%f",&c);
    
     printf("value of a+(b/c)=%.2f",a+(b/c));
     printf("value of a*b*c =%.2f",a*b*c);

     return 0;
    
}