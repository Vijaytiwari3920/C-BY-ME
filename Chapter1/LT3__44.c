#include<stdio.h>

int main()
{
    int N;
    printf("Enter any Number");
    scanf("%d",&N);
    int A[20];
    int i=0;
    while (N>0)
    {
        A[i]=N%2;
        i++;
        N=N/2;

    }

     printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", A[j]);
    }
    
    
    printf("End");

   
    
     
    return 0;
}