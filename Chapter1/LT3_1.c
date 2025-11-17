#include<stdio.h>


int main()     
{
    char a;
    int b;
    float c;
    double d;

    printf("Enter one Character and Two Numbers: \n");

     scanf(" %c",&a);
     scanf("%d",&b);
     scanf("%f",&c);
     scanf("%lf",&d);
    


    
     printf("%.2f",a+b*c-d);
}