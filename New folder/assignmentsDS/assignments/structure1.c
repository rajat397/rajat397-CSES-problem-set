// Define a structure for representing a point in two-dimensional Cartesian coordinate system.
// Write a function to compute the distance between two given points.
// Write a function to compute the middle point of the line segment joining two given
// points.

#include<stdio.h>
#include<math.h>


struct point{
    float x;
    float y;

};

float distance(struct point*a,struct point*b)
{
      float ans;
      ans=sqrt(pow(((a->x)-(b->x)),2)+ pow(((a->y)-(b->y)),2));
      return ans;
}
struct point middle(struct point*a,struct point*b)
{
      struct point ans;
      ans.x=(a->x+b->x)/2.0;
      ans.y=(a->y+b->y)/2.0;
      return ans;
}
int main()
{
    struct point a,b,mid;
    fflush(stdin);
    printf("enter the coordinates of the first point\n ");
    scanf("%f%f",&a.x,&a.y);
    fflush(stdin);
    printf("enter the coordinates of the second point \n");
    scanf("%f%f",&b.x,&b.y);

     
    printf("the distance between the entered points is = %0.2f \n",distance(&a,&b));
    mid=middle(&a,&b);
    printf("the coordinates of the middle point of the line segment joining two given points are (%0.2f,%0.2f) \n",mid.x,mid.y);
    
    return 0;

}