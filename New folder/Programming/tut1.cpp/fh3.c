#include<stdio.h>
#include<string.h>
#define MAXLEN 100
void prnPara(char para[][MAXLEN])
{
  int i,cnt=0;
  for(i=0;strlen(para[i])!=0;i++)
  {
    //   printf("%d\n",strlen(para[i]));
     printf("%s\n",para[i]);         
     cnt++;
  }
  printf("\n cnt is %d",cnt);
}
int main()
{
    char para[3][MAXLEN];
    int i;

    for(i=0;i<3;i++)   
    {
        fflush(stdin);
        printf("enter the %dth line",i+1);
        gets(para[i]);
        printf("%d\n",strlen(para[i]));
    }
    prnPara(para);
    return 0;
}