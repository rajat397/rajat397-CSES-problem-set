#include <stdio.h>
int checkPrime(int a);

int main()
{
    int i, num;
    printf("enter the number");
    scanf("%d", &num);
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            if (checkPrime(i) == 1)
            {
                printf("%d is a prime factor of %d \n", i, num);
            }
        }
    }
    return 0;

}   
    int checkPrime(int a)
    
    {
        int j;
        for(j=2;j<a;j++)
        {
            if(a%j==0){
            return 0;
            break;
            }
            

        }
        
        
            return 1;
            
            
    }
    
    
    
    
