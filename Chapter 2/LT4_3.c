#include <stdio.h>

int main() {
    int n;
    char a;
    printf("Enter a number between 1 and 26:\n ");
    scanf("%d", &n);

    printf("Enter a Character between 'a'and'z':\n ");
    scanf(" %c",&a);

    if (n >=0 && n <= 25 && a <= 'z' && a >= 'a')         
    {
        printf("Shifted alphabet is %c ",n+a);
    }
    else
    {
        printf("invalid");
    }
    
    return 0;
}
