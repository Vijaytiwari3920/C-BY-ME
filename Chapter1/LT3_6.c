#include<stdio.h>

float har_min(int n,float A[])
{
    float H=0.0;
    for (int i = 0; i < n; i++)
    {
          H+=1.0/A[i];
    }
    float mean= n/H;
    
    printf("Harmonic mean=  %f",mean);
}

void main()
{
    int n;
    printf("Enter numbers  ");
    scanf("%d",&n);
    
    float A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%f",&A[i]);
    }
    
    har_min( n, A);

    printf("Done");

}
