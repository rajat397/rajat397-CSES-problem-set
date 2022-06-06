#include<stdio.h>
struct date
{
int date;
int month;
int year;
};

int date_compare(struct date d1, struct date d2)
{
if(d1.date == d2.date && d1.month == d2.month && d1.year == d2.year)
{
    return 1;
}
else{
    return 0;
}

}
int main()
{
    
    struct date date1, date2;
    printf("enter first date ");

    printf("enter  date ");
    scanf("%d",&date1.date);

    printf("enter month ");
    scanf("%d",&date1.month);

    printf("enter  year ");
    scanf("%d",&date1.year);

    printf("enter second date ");
    
    printf("enter  date ");
    scanf("%d",&date2.date);

    printf("enter month ");
    scanf("%d",&date2.month);

    printf("enter  year ");
    scanf("%d",&date2.year);   

    if(date_compare(date1, date2)==1 )
    {
        printf("dates are equal");
    } 
    else{
        printf("dates are not equal");
    }
}