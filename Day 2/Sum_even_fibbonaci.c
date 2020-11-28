#include <stdio.h>

int main()
{
    int a;
    int fib[100000];
    int sum = 0;
    int limit = 4000000;

       
    fib[0] = 0; 
    fib[1] = 1;
    int i = 2; 

    //loop till the limit  
    while (sum < limit)
    { 
        //Check if sum exceeds limit
        if (sum >= limit)
        {
            break;
        }
        
        //Generate fibonacci number
        fib[i] = fib[i - 1] + fib[i - 2];
        
        //Check if the number is even or not
        if (fib[i]%2 == 0)
        {
             sum += fib[i];
        }        
        i++;
    }
    printf("%d", sum);
    return 0;
}