#include <stdio.h>

int fib(int n)
{
    int a=0; int b=1;
    int c;
    printf("fibonachi serise is:-\t");
    for(int i = 1 ; i<=n ; i++)
    {
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
    }
}

int main() {
    int n;
    printf("Enter the terms");
    scanf("%d",&n);

    fib(n);
    return 0;
}
