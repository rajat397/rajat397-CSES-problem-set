#include <stdio.h>
#include <stdlib.h>

struct time
{
	int hours;
	int minutes;
};
struct schedule
{
	char description[50];
	char day[10];
	struct time c;	
};
struct address
{
	char street[50];
	char city[20];
	char state[20];
	int zip;
};
struct student
{
	float gpa;
	char major[20];
	struct address b;
    struct schedule a[6];
};
int main()
{
    char ch='y';
    int i,j;
    int n;
    printf("\nEnter number of students : ");
    scanf("%d",&n);
    fflush(stdin);
    struct student s[10];
    for( i=0; i<n; i++)
    {
	printf("\nEnter data for student %d ",i+1);
   	printf("\n\nEnter GPA : ");    
   	scanf("%f",&s[i].gpa);
    printf("\nEnter major : ");
    gets(s[i].major);
    printf("\n\nEnter address ----------------------------------------");
    printf("\nEnter street address : ");
    gets(s[i].b.street);
    printf("\nEnter city : ");
    gets(s[i].b.city);
    printf("\nEnter state : ");
    gets(s[i].b.state);
    printf("\n\nEnter zip code : ");    
    scanf("%d",&s[i].b.zip);
    printf("\n\n Schedule --------------------------------------------");
    for(  j=0; i<6; i++)
	{
		printf("\nEnter description : ");
        gets(s[i].a[j].description);
        printf("\nEnter day : ");
        gets(s[i].a[j].day);
        printf("\nEnter time ");
        printf("\nEnter hours  : ");
        scanf("%d",&s[i].a[j].c.hours);
        printf("Enter minutes  : ");
        scanf("%d",&s[i].a[j].c.minutes);
	} 
			
	}
    
	printf("\n\n-------------------------------------------------------");
	
	for( i=0; i<n; i++)
	{
	printf("\n\n\nDate of entered student :");
    printf("\n\nGPA : ");    
   	printf("%f",s[i].gpa);
    printf("\nMajor : ");
    printf("%s",s[i].major);
    printf("\n\nAddress ----------------------------------------");
    printf("\nstreet address : ");
    printf("%s",s[i].b.street);
    printf("\ncity : ");
    printf("%s",s[i].b.city);
    printf("\nstate : ");
    printf("%s",s[i].b.state);
    printf("\nzip code : ");    
    printf("%d",&s[i].b.zip);
    printf("\n\n Schedule --------------------------------------------");
    for(  j=0; i<6; i++)
	{
		printf("\ndescription : ");
        printf("%s",s[i].a[j].description);
        printf("\nday : ");
        printf("%s",s[i].a[j].day);
        printf("\ntime ");
        printf("\nhours  : ");
        printf("%d",s[j].a[0].c.hours);
        printf("\nminutes  : ");
        printf("%d",s[j].a[0].c.minutes);
	}	
	}
	
	return 0;	
}