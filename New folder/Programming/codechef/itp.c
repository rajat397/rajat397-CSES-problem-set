#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct address
{
    char street[300];
    char city[300];
    char state[300];
    int zip;
};
struct time
{
    int hours;
    int minutes;
};
struct cl_schedule

{
    char desc[300];
    struct time t;
    char day[30];
};

struct student
{
    float gpa;
    char major[100];
    struct address add;

    struct cl_schedule record[6];
};

int main()
{
    int n;
    printf("enter the number of students \n");
    scanf("%d", &n);
    fflush(stdin);
    struct student stu[1000];

    int i, j;
    for (i = 0; i < n; i++)
    {
        printf("Enter data for student %d \n ", i + 1);
        fflush(stdin);

        printf("Enter GPA : \n ");
        scanf("%f", &stu[i].gpa);
        fflush(stdin);

        printf("Enter major : \n");
        gets(stu[i].major);
        fflush(stdin);

        printf("\n\nEnter address ----------------------------------------");
        fflush(stdin);

        printf("\nEnter the street address : ");
        gets(stu[i].add.street);
        fflush(stdin);

        printf("\nEnter city : ");
        gets(stu[i].add.city);
        fflush(stdin);

        printf("\nEnter state : ");
        gets(stu[i].add.state);
        fflush(stdin);

        printf("\n\nEnter zip code : ");
        scanf("%d", &stu[i].add.zip);
        fflush(stdin);

        printf("\n\n Schedule --------------------------------------------");
        for (j = 0; i < 6; i++)
        {
            fflush(stdin);

            printf("\nEnter description : ");
            gets(stu[i].record[j].desc);
            fflush(stdin);

            printf("\nEnter day : ");
            gets(stu[i].record[j].day);
            fflush(stdin);

            printf("\nEnter time ");
            printf("\nEnter hours  : ");
            fflush(stdin);

            scanf("%d", &stu[i].record[j].t.hours);
            printf("Enter minutes  : ");
            fflush(stdin);

            scanf("%d", &stu[i].record[j].t.minutes);
        }
    }

    printf("\n\n-------------------------------------------------------");

    for (i = 0; i < n; i++)
    {
        printf("\n\n\nData of entered student :");
        printf("\n\nGPA : ");
        printf("%f", stu[i].gpa);
        printf("\nMajor : ");
        printf("%s", stu[i].major);
        printf("\n\nAddress ----------------------------------------");
        printf("\nstreet address : ");
        printf("%s", stu[i].add.street);
        printf("\ncity : ");
        printf("%s", stu[i].add.city);
        printf("\nstate : ");
        printf("%s", stu[i].add.state);
        printf("\nzip code : ");
        printf("%d", &stu[i].add.zip);
        printf("\n\n Schedule --------------------------------------------");
        for (j = 0; i < 6; i++)
        {
            printf("\ndescription : ");
            printf("%s", stu[i].record[j].desc);
            printf("\nday : ");
            printf("%s", stu[i].record[j].day);
            printf("\ntime ");
            printf("\nhours  : ");
            printf("%d", stu[j].record[0].t.hours);
            printf("\nminutes  : ");
            printf("%d", stu[j].record[0].t.minutes);
        }
    }

    return 0;
}
