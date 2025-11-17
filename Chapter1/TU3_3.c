#include<stdio.h>


char Message(char c)
{

    switch (c)
    {
    case 'i':
        printf("India");
        break;
    case 'j':
        printf("Japan");
        break;
    case 'v':
        printf("Vietnamese");
        break;
    
    case 't':
        printf("Turkish");
        break;
    
    case 'n':
        printf("Nigiria");
        break;
    
    case 'a':
        printf("Austeliya");
        break;
    
    default:
        break;
    }

}
    

void main(){

    char c;
    printf("Enter the Character\t");
    scanf("%c",&c);

    Message(c);
    

}