/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/
    
#include <stdio.h>

int main()
{
    int a, b, c;
    int i, j, k;
    int x;
    
    //Find the number of terms
    i = 999/3;
    j = 999/5;
    k = 999/15;
    
    //To find the sum of the numbers using k*n*(n+1)/2
    a = 3 * i * (i + 1)/2;

    b = 5 * j * (j + 1)/2;
    
    //Also find the sum of multiples of 15 since it is a common factor
    c = 15 * k * (k + 1)/2;

    //add multiples of 3 and 5 and subtract the multiples of 15
    x = a + b - c;    

    printf("%d",x);
    return 0;
}
