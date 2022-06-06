
// question 3 
#include <stdio.h>
#include<string.h>
 

void reverse(char* begin, char* end)
{
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}
 

void reverse_word(char* line)
{
    char* start = line;
    char* t=line;
    while (*t) {
        t++;
        if (*t== '\0') {
            reverse(start, t-1);
        }
        else if (*t== ' ') {
            reverse(start, t-1);
            start = t+1;
        }
    }
 
 
    reverse(line, t- 1);
}
 
int main()
{
    // char str[] = "birds and bees";
    char line[1000];
    fflush(stdin);

    printf("enter a line of words \n");
    gets(line);

    char* temp = line;
    reverse_word(line);
    printf("%s", line);
    return 0;
}