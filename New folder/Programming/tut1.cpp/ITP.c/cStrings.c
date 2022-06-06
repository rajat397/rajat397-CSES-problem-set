#include<stdio.h>

int main()
{
    char str1[100],str2[100], res[200];
    int i,j,k;
    printf("enter the string1");
    fgets(str1,sizeof(str1),stdin);
    printf("enter the string1");
   fgets(str2,sizeof(str2),stdin);
   for(i=0;str1[i]!='\0';i++);
   for(j=0;str2[j]!='\0';j++);
   for(k=0;k<i;k++)
   {
       res[k]=str1[k];
   }
   for(k=i;k<i+j;k++)
   {
       res[k]=str2[k-i];
   }
   res[k]='\0';
   printf("the concatenated string is  %s ",res);



    return 0;
}