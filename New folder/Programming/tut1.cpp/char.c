#include<stdio.h>
#include<stdlib.h>

int main()
{
    char a,b,c;
    printf("enter first character");
    scanf("%c",&a);
    fflush(stdin);
    printf("enter second character");
    scanf("%c",&b);
    fflush(stdin);

    printf("enter third character");
    scanf("%c",&c);
    fflush(stdin);
    
printf("%c,%C,%C are inputted characters",a,b,c);
    return 0;
}