#include <stdio.h>

int main() {
    int n;
    printf("Enter a number between 1 and 26: ");
    scanf("%d", &n);

    
        printf("\nThe corresponding characters are: '%c' (uppercase) and '%c' (lowercase)\n", n + 64, n + 96);
    
    return 0;
}
