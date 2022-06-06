#include<stdio.h>
#include<math.h>
int main()
{
     
double x,s,t;
int i;
i=0,s=t=1;
do{
    ++i;
    t/=(double)i;
    s+=t;
    printf("%lf\n",t*(double)i);
}while(i<10);
    printf("%lf\n",t*i);

    return 0;
}