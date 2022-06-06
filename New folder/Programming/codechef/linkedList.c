#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
   struct node*next;
};
struct node*A=NULL;


void Insert(int x)
{
struct node*temp;
temp=(struct node*)(malloc(sizeof(struct node)));
temp->data=x;


temp->next=A;
A=temp;        
}

void Print()
{
    struct node*temp=A;
    printf("The list is -\n"); 
    while(temp!=NULL)
    {
       printf("%d ",temp->data);
       temp=temp->next;
    }
    printf("\n");

}


int main()
{

int n,i,x;
printf("enter the number of elements to be inserted in the list");
scanf("%d",&n);
for(int i=0;i<n;i++){

printf("enter the number to be inserted");
scanf("%d",&x);
Insert(x);
Print();


}





}