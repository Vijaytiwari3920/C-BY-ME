#include<stdio.h>

char A;
char conv(char c)
{
    if(c>='A'&& c<='Z'){
        A=c+32;
    }
    else{
        A=c-32;
    }
}

void main(){

    char c;
    printf("Enter the Character\t");
    scanf("%c",&c);

    conv(c);
    
    printf("converted character is :- %c",A);

}