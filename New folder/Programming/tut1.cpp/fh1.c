#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int k,n,m,l,i;
    FILE*fp;
    fp=fopen("D://fh1.txt","w");
    char *txt,*rd;
    printf("enter the no of lines to be written in the file");
    scanf("%d",&l);
    char*lines[l];
    k=l;
    for(i=0;i<3;i++)
    {
    printf("enter the expected size of the text");
    scanf("%d",&n);
    txt=(char*)malloc(n*sizeof(char));
    fflush(stdin);
    printf("enter the text to be stored in text file");
    gets(txt);
    lines[i]=txt;
    // fputs(txt,fp);
    fputs("\n",fp);
    }
    fwrite(lines,sizeof(lines),1,fp);
    fclose(fp);
    fp=fopen("D://fh1.txt","r");
    // for(int l=1;l<=k;l++)
    // {
    // // rd=(char*)malloc(n*sizeof(char));
    // fgets(rd,n,fp);
    char ch=fgetc(fp);
    while(ch!=EOF)
    {
    // printf("the text in the %dth line of the file is as follows \n",l);
    // printf("the size of the text in %dth line is %d \n",l,a[l-1]);
    
    printf("%c",ch);
    ch=fgetc(fp);
    }
    // }
    fclose(fp);

        
    return 0;
}