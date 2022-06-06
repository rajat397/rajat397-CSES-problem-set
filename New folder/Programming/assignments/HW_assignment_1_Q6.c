#include<stdio.h>
#include<time.h>

int arr[1000]={0};
int solve(int n)
{

    //if(arr[n]==0) {
        if(n<3) {
        printf("Called %d\n",n);

            return 1;
        }
        printf("Called %d\n",n);
        return (arr[n]=(6*solve(n-2)-solve(n-1)));
    //}
    //return arr[n];
}
int main()
{
    int ans=0;
 
     clock_t t;
    t = clock();
     ans=solve(20);
    
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("fun() took %f seconds to execute \n", time_taken);
    printf("the value of 20th term is %d\n",ans);

    return 0;
}