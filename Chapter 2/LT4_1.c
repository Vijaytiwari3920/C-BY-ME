#include<stdio.h>

int main()
{
    int Hr,Min;
    printf("Enter Hour and miniutes in Form of\n 0<=Hr<=11\n 0<=Min<=59:-  \n");

    scanf("%d",&Hr);
    scanf("%d",&Min);

    Hr= (Hr+6)%12;

    printf("Mirror time is:-  %d:%d",Hr,Min);

    printf("And time in minutes is :- %d" ,((Hr*60)+Min));


}