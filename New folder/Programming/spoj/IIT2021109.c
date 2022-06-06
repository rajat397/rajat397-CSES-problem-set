#include<stdio.h>

struct DATE
{
    int day;
    int month;
    int year;

};
int Isvalid(struct DATE d)
{
    if(d.month==1||d.month==3||d.month==5||d.month==7||d.month==8||d.month==10||d.month==12)
    {
        if(d.day>=1&&d.day<=31)
        {
            return 1;
        }
        else return 0;
    }
    else if(d.month==4||d.month==6||d.month==9||d.month==11)
    {
        if(d.day>=1&&d.day<=30)
        {
            return 1;
        }
        else return 0;
    }
    else if(d.month ==2)
    {
        if((d.year%4==0)&&(d.year%100!=0)||(d.year%100==0)&&(d.year%400==0))
        {
            if(d.day>=1&&d.day<=29)
            {
                return 1;

            }
            else return 0;
        }
        else{
               if(d.day>=1&&d.day<=28)
               {
                   return 1;
               }
               else return 0;
        }
    }
    else 
    {
        return 0;
    }
}

struct DATE Nextdate(struct DATE d)
{
    struct DATE dnew;
    if(d.month==12)
    {
        if(d.day==31)
        {
            dnew.day=1;
            dnew.month=1;
            dnew.year=d.year+1;
            
        }
        else{
            dnew.day=d.day+1;
            dnew.month=d.month;
            dnew.year=d.year;
        }
    }
    else if(d.month==1||d.month==3||d.month==5||d.month==7||d.month==8||d.month==10)
    {
        if(d.day==31)
        {
            dnew.day=1;
            dnew.month=d.month+1;
            dnew.year=d.year;
        }
        else{
            dnew.day=d.day+1;
            dnew.month=d.month;
            dnew.year=d.year;
        }
    }
    else if(d.month==4||d.month==6||d.month==9||d.month==11)
    {

        if(d.day==30)
        {
            dnew.day=1;
            dnew.month=d.month+1;
            dnew.year=d.year;
        }
        else{
            dnew.day=d.day+1;
            dnew.month=d.month;
            dnew.year=d.year;
        }
    }
    else if(d.month==2)
    {
          if((d.year%4==0)&&(d.year%100!=0)||(d.year%100==0)&&(d.year%400==0))
          {
              if(d.day==29)
              {
                  dnew.day=1;
                  dnew.month=d.month+1;
                  dnew.year=d.year;
              }
             else{
            dnew.day=d.day+1;
            dnew.month=d.month;
            dnew.year=d.year;
                       }
          }
          else{
              if(d.day==28)
               {
                  dnew.day=1;
                  dnew.month=d.month+1;
                  dnew.year=d.year;
              }
             else{
            dnew.day=d.day+1;
            dnew.month=d.month;
            dnew.year=d.year;
                       }
          }
    }
    return dnew;
}
struct DATE Datediff(struct DATE d1,struct DATE d2)
{
    struct DATE diff;
     diff.year=d1.year-d2.year;
    if(d1.month>d2.month)
    {
    diff.month=d1.month-d2.month;
    
     if(d1.day>d2.day)
       diff.day=d1.day-d2.day;
       else{
       diff.day=d2.day-d1.day;

       }
    }

    return diff;
}

void printDate(struct DATE d)
{
    printf("the day is %d \n",d.day);
    printf("the month is %d \n",d.month);
    printf("the year is %d \n",d.year);

}
int main()
{
    struct DATE d[2];
    int i;
    for(i=0;i<2;i++)
    {
        printf("enter the date %d\n",i+1);
       printf("enter the day \n ");
       scanf("%d",d[i].day);
        printf("enter the month \n");
       scanf("%d",d[i].month);
        printf("enter the year \n");
       scanf("%d",d[i].year);
    }
    if(Isvalid(d[0])==1)
    {
        printf("first entered date is valid\n");
    }
    else 
    {
         printf("first entered date is invalid\n");
    }
    if(Isvalid(d[1])==1)
    {
        printf("second entered date is valid\n");
    }
    else 
    {
         printf("second entered date is invalid\n");
    }

    if(Isvalid(d[0]))
    {
        printDate(Nextdate(d[0]));
    }
    
    if(Isvalid(d[1]))
    {
        printDate(Nextdate(d[1]));
    }
   
    return 0;
}