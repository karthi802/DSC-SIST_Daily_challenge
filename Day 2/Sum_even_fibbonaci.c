/*Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
#include <stdio.h>
*/

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
