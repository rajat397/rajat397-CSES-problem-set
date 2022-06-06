#include<stdio.h>
#include<math.h>
struct complex{
    float a;
    float b;

};

void sumComplex(struct complex *c1, struct complex *c2,struct complex*res1)
{
    res1->a=(c1->a)+(c2->a);
    res1->b=(c1->b)+(c2->b);
}
void diffComplex(struct complex *c1, struct complex *c2,struct complex*res2)
{
    res2->a=(c1->a)-(c2->a);
     res2->b=(c1->b)-(c2->b);
}
void prodComplex(struct complex *c1, struct complex *c2,struct complex*res3)
{
    res3->a=((c1->a)*(c2->a))-((c1->b)*(c2->b));
    res3->b=((c1->a)*(c2->b))+((c1->b)*(c2->a));

}
void divideComplex(struct complex *c1, struct complex *c2,struct complex*res4)
{
    res4->a=(((c1->a)*(c2->a))+((c1->b)*(c2->b)))/((pow((c2->a),2)+pow((c2->b),2)));
    res4->b=(((c2->a)*(c1->b))-((c1->a)*(c2->b)))/((pow((c2->a),2)+pow((c2->b),2)));
}

void printComplex(struct complex *res)
{
    printf("%0.2f + i%0.2f \n",res->a,res->b);
}




int main()
{  
    struct complex c1,c2,res1,res2,res3,res4;
   printf("enter the real and imaginary part of the first complex number") ;
   scanf("%f%f",&c1.a,&c1.b);
    printf("enter the real and imaginary part of the second complex number") ;
   scanf("%f%f",&c2.a,&c2.b);

    sumComplex(&c1,&c2,&res1);
    diffComplex(&c1,&c2,&res2);
    prodComplex(&c1,&c2,&res3);
    divideComplex(&c1,&c2,&res4);

    printComplex(&res1);
    printComplex(&res2);
    printComplex(&res3);
    printComplex(&res4);


     

    return 0;
}