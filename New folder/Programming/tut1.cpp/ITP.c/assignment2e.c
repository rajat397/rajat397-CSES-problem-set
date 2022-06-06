#include <stdio.h>
#include <stdlib.h>
struct dates
{
    int date;
    int month;
    int year;
};
int date_compare(struct dates a, struct dates b)
{
    if (a.date == b.date)
    {
        if (a.month == b.month)
        {
            if (a.year == b.year)
            {
                return 1;
            }
            else 
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}
int check_month(int b)
{
    if (b >= 1 && b <= 12)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int check_date(struct dates a)
{
    if (a.month == 2)
    {
        if (a.year % 4 == 0)
        {
            if (a.year % 100 != 0 || (a.year % 100 == 0 && a.year % 400 == 0))
            {
                if (a.date >= 1 && a.date <= 29)
                {
                    return 1;
                }
                else
                {
                    return 0;
                }
            }
            else if (a.date >= 1 && a.date <= 28)
            {
                return 1;
            }
            else
                return 0;
        }

        else if (a.date >= 1 && a.date <= 28)
        {
            return 1;
        }
        else return 0;
    }
    else if (a.month == 4 || a.month == 6 || a.month == 9 || a.month == 11)
    {
        if ((a.date >= 1 && a.date <= 30))
        {
            return 1;
        }
        else return 0;
    }
    else if (a.date >= 1 && a.date <= 31)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int i;
    struct dates a[2];
    for (i = 0; i < 2; i++)
    {
        printf("\nEnter data for date%d", i + 1);
        printf("\nEnter Date : ");
        scanf("%d", &a[i].date);
        printf("\nEnter Month : ");
        scanf("%d", &a[i].month);
        printf("\nEnter Year : ");
        scanf("%d", &a[i].year);
    }
    printf("\nDates entered by you ");
    for (i = 0; i < 2; i++)
    {
        printf("\n %d : %d - %d - %d ", i + 1, a[i].date, a[i].month, a[i].year);
        if (!(check_date(a[i]) && check_month(a[i].month)))
        {
            printf("\n Entered date is invalid\n");
            
            exit(0);
        }
    }

    if (date_compare(a[0], a[1]))
    {
        printf("\nDates entered are equal \n");
    }
    else
    {
        printf("\nDates entered are unequal \n");
    }

    return 0;
}
